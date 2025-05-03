struct ListNode* removeElements(struct ListNode* head, int val) {
    // 因為第一個指針也有可能被刪，因此建立一個虛擬節點
    // 原本 head->1->2->6
    struct ListNode* dummy = (struct ListNode*)malloc(sizeof(struct ListNode));
    dummy->next = head;
    // dummy->head->1->2->6
    // 建立一個要跑得指針 curr
    struct ListNode* curr = dummy;
    while(curr && curr->next){
        if(curr->next->val == val){
            curr->next = curr->next->next;
        }else{
            curr = curr->next;
        }
    }
    return dummy->next;

}