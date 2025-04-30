ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    // 建立虛擬節點
    ListNode* head = new ListNode(0);
    ListNode* curr = head;
    // 逐一跑
    while(list1!=nullptr && list2!=nullptr){
        // 每一次去比較節點，小的節點裝在新node上
        if(list1->val < list2->val){
            curr->next = list1;
            list1 = list1->next;
            curr = curr->next;
        }else{
            curr->next = list2;
            list2 = list2->next;
            curr = curr->next;
        }
    }
    // 迴圈結束，有一格linklist還沒完成，剩餘的直接插上去新的linklist
    if(list1!=nullptr)curr->next = list1;
    else curr->next = list2;
    return head->next;
}