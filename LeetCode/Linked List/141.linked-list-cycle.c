bool hasCycle(struct ListNode *head) {
    // 建立快慢指針
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    // 因為right，依次要走兩步，要到fast->next->next => 要檢查fast->next是否為空
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast) return true;
    }
    return false;
}