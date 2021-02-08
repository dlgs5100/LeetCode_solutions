/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *cur, *del;
    cur = head;
    while (cur) {
        if (cur->next && cur->val == cur->next->val){
            del = cur->next;
            cur->next = cur->next->next;
            free(del);
        }
        else
            cur = cur->next;
    }
    return head;
}
