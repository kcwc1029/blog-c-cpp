class Solution {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            ListNode* dummy = new ListNode(0); // 最後返回
            ListNode* node = dummy; // 紀錄加總後的節點
            int carry = 0; // 紀錄進位
            while(l1 || l2 || carry){
                // 處裡已經跑完的節點    
                int l1_val = (l1 != nullptr) ? l1->val : 0; // 如果 l1 不為空，取其值；否則取 0
                int l2_val = (l2 != nullptr) ? l2->val : 0; // 如果 l2 不為空，取其值；否則取 0
    
                int sum = l1_val + l2_val + carry; // 將 l1、l2 的值以及 carrier 相加
    
                // 處裡加總後的節點
                node->next = new ListNode(sum%10);
                node = node->next;
                carry = sum/10;
    
                // l1 l2前進
                if(l1!=nullptr) l1 = l1->next;
                if(l2!=nullptr) l2 = l2->next;
            }
            return dummy->next;
        }
    };