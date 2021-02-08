/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct ListNode *cur = head, *pre;
    bool flagDel = false;
    while (cur) {
        while (cur->next && cur->val == cur->next->val) { // Delete non-first element in duplicate
            flagDel = true;
            cur->next = cur->next->next;
        }
        if (flagDel) {  // Delete first element in duplicate
            if (cur == head) {
                cur = cur->next;
                head = cur;
            }
            else {
                cur = cur->next;
                pre->next = cur;
            }
            flagDel = false;
        }
        else {
            pre = cur;
            cur = cur->next;
        }
    }
    return head;
}
