struct ListNode *detectCycle(struct ListNode *head) {
    // 建立快慢指針
    struct ListNode *fast = head;
    struct ListNode *slow = head;
    // 第一次相遇
    while(fast && fast->next){
        fast = fast->next->next;
        slow = slow->next;
        if(slow==fast) break;
    }

    // 如果沒有環
    if (fast == NULL || fast->next == NULL) return NULL;
    // 有環，讓 fast 回到頭
    fast = head;
    // 第二次相遇：只要讓 fast 和 slow 一起每次走一步，直到再次相遇就好。
    while(fast!=slow){
        slow = slow->next;
        fast = fast->next;
    }
    return fast;
};