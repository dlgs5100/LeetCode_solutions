/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
struct TreeNode *dfs(struct ListNode *head, struct ListNode *tail){
    if(head == tail)
        return NULL;
    struct ListNode *slow=head, *fast=head;
    while(fast!=tail && fast->next!=tail){
        slow = slow->next;
        fast=fast->next->next;
    }
    struct TreeNode *parent = malloc(sizeof(struct TreeNode));
    parent->val = slow->val;
    parent->left = dfs(head,slow);
    parent->right = dfs(slow->next,tail);
    return parent;
}
struct TreeNode* sortedListToBST(struct ListNode *head){
    if(!head)return NULL;
    return dfs(head,NULL);
}
