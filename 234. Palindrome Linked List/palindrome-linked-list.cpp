/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int hop=0;
        ListNode *slow=head, *fast=head;
        while(fast && fast->next){
            hop++;
            slow = slow->next;
            fast = fast->next->next;
        }
        if(!fast)
            hop-=1;
        ListNode *pre=NULL, *next;
        while(slow){
            next = slow->next;
            slow->next = pre;
            pre = slow;
            slow = next;
        }
        for(int i=0; i<=hop; i++){
            if(pre->val != head->val)
                return false;
            pre = pre->next;
            head = head->next;
        }
        return true;
    }
};
