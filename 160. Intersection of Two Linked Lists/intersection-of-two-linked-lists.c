/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    int i, lenA=0, lenB=0;
    struct ListNode *tmpA=headA, *tmpB=headB;
    while(tmpA){
        tmpA = tmpA->next;
        lenA++;
    }
    while(tmpB){
        tmpB = tmpB->next;
        lenB++;
    }
    if(lenA>=lenB){
        for(i=0; i<(lenA-lenB); i++)
            headA = headA->next;
    }
    else{
        for(i=0; i<(lenB-lenA); i++)
            headB = headB->next;
    }
    while(headA && headB){
        if(headA == headB)
            return headA;
        headA = headA->next;
        headB = headB->next;
    }
    return NULL;
}
