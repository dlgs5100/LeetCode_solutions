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
    set<ListNode*> setNode;
    bool hasCycle(ListNode *head) {
        while(head && setNode.find(head) == setNode.end()){
            setNode.insert(setNode.end(), head);
            head = head->next;
        }
        return !head ? false : true;
    }
};
