/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *head = malloc(sizeof(struct ListNode)), *cur;
    cur = head;
    cur->next = NULL;
    while(l1 || l2){
        if(!l2 || (l1 && l1->val <= l2->val)){
            cur->next = l1;
            l1 = l1->next;
        }
        else{
            cur->next = l2;
            l2 = l2->next;
        }
        cur = cur->next;
    }
    return head->next;
}
