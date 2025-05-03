struct ListNode* deleteDuplicates(struct ListNode* head) {
    // head->1->1->1->2->3
    // 建立dummy node
    struct ListNode* dummy =  (struct ListNode*)malloc(1 * sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode* curr = dummy;
    // dummy||curr->NULL
    while(curr->next!=NULL && curr->next->next!=NULL){
        int target = curr->next->val; // 紀錄左邊的1
        if(target == curr->next->next->val){ // 比較左邊的1跟中間的1
            while(curr->next && curr->next->val == target){
                curr->next = curr->next->next; // 刪除左邊的1
            }
        }else{
            curr = curr->next;
        }
    }

    return dummy->next;
}