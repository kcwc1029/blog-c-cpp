struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode)); // 建立虛擬節點
    struct ListNode* curr = head;
    while (list1 != NULL && list2 != NULL){
        if (list1->val < list2->val){
            curr->next = list1;
            curr = curr->next;
            list1 = list1->next;
        }else{
            curr->next = list2;
            curr = curr->next;
            list2 = list2->next;
        }
    }
    // 把剩下未合併完的 list 接上
    if (list1 != NULL) curr->next = list1;
    else curr->next = list2;
    return head->next;
}
