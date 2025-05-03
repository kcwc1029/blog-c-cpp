
// 先找到中間(876)
struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

// 後半段反轉(206)
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* curr = head;
    struct ListNode* prev = NULL;
    while(curr!=NULL){
        struct ListNode* temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
}

bool isPalindrome(struct ListNode* head) {
    struct ListNode* mid = middleNode(head);
    struct ListNode* head2 = reverseList(mid);
    while(head && head2){
        if(head->val != head2->val) return false;
        head = head->next;
        head2 = head2->next;
    }
    return true;
}