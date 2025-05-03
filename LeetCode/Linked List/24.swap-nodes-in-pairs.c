struct ListNode* swapPairs(struct ListNode* head) {
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode* curr = dummy;
    // curr->1->2->3->4
    while (curr->next && curr->next->next){
        struct ListNode* p1 = curr->next;
        struct ListNode* p2 = curr->next->next;
        // 拆線
        curr->next = p2;
        p1->next = p2->next;
        p2->next = p1;
        // 跳下下一個
        curr = curr->next->next;
    }
    return dummy->next;
}