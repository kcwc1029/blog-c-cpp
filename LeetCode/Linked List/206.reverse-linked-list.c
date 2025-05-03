struct ListNode* reverseList(struct ListNode* head) {
    // STEP01：初始化
    struct ListNode* curr = head;
    struct ListNode* prev = NULL;

    // STEP02：while
    while(curr!=NULL){
        // STEP03：初始化temp
        struct ListNode* temp = curr->next;
        // STEP04：將curr當下的node做修改(doing reverse)
        curr->next = prev;
        // STEP05：準備下一輪
        prev = curr;
        curr = temp;
    }
    return prev;
}