class Solution {
    public:
        bool hasCycle(ListNode *head) {
            ListNode* left = head;
            ListNode* right = head;
            while(right && right->next){
                left = left->next;
                right = right->next->next;
                if(left==right) return true;
            }
            return false;
        }
    };