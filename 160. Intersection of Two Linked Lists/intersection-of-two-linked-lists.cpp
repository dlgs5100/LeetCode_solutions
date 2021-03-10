/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        unordered_set<ListNode *> table;
        while(headA){
            table.insert(headA);
            headA = headA->next;
        }
        while(headB){
            if(table.find(headB) != table.end())
                return headB;
            headB = headB->next;
        }
        return NULL;
    }
};
