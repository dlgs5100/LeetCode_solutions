struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    int carry = 0;
    struct ListNode *head = NULL, *pre;
    while(l1 || l2 || carry){
        struct ListNode *node = malloc(sizeof(struct ListNode));
        node->val = carry;
        node->next = NULL;
        if(l1){
            node->val += l1->val;
            l1 = l1->next;
        }
        if(l2){
            node->val += l2->val;
            l2 = l2->next;
        }
        carry = node->val / 10;
        node->val %= 10;
        if(!head)
            head = node;
        else
            pre->next = node;
        pre = node;      
    }
    return head;
}
