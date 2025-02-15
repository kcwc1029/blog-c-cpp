class Solution {
    public:
        ListNode* removeNthFromEnd(ListNode* head, int n) {
            // 定義虛擬節點->返回用
            ListNode* dumpy = new ListNode(0);
            dumpy->next = head;
            // 定義快慢指針
            ListNode* pre = dumpy;
            ListNode* end = dumpy;
            // 讓快指針先移動n部 
            while(n!=0){
                pre = pre->next;
                n--;
            }
            // 再讓快慢指針保持這樣的間距，移到最後面
            while(pre->next!=nullptr){
                pre = pre->next;
                end = end->next;
            }
            // 要移除的節點，曼指針的下一個
            end->next = end->next->next; 
            return dumpy->next;
        }
    };