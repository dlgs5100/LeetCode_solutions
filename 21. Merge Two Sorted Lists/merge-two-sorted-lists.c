/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
​
​
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *l3_head = (struct ListNode*)malloc(sizeof(struct ListNode));
    l3_head->next = NULL;
    struct ListNode *l3 = l3_head;
    while(l1 || l2){
        if((l1 && !l2) || (l1 && l2 &&(l1->val <= l2->val))){
            l3->next = l1;
            l1 = l1->next;
        }
        else if((!l1 && l2) || (l1 && l2 &&(l1->val > l2->val))){
            l3->next = l2;
            l2 = l2->next;
        }
        l3 = l3->next;
    }
    return l3_head->next; 
}
