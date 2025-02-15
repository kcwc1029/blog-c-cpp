// 解法 1：遞迴
class Solution {
    public:
        ListNode* swapPairs(ListNode* head) {
            // 終止條件
            if(head == nullptr || head->next == nullptr){
                return head;
            }
            ListNode* p1 = head->next;
            ListNode* p2 = head->next;
    
            // recusion
            p1->next = swapPairs(p2->next);
            p2->next = p1;
    
            return p2;
        }
    };