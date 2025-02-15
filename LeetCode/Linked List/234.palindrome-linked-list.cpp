class Solution {
    public:
        // TODO: 找到中間node
        ListNode* middleNode(ListNode* head){
            ListNode* slow = head, *fast = head;
            while (fast && fast->next){
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow;
        }
        // TODO: 反轉linked
        ListNode* reverseList(ListNode* head){
            ListNode* pre = nullptr, *cur = head;
            while(cur){
                ListNode* nxt = cur->next;
                cur->next = pre;
                // 往下一個陀洞
                pre = cur;
                cur = nxt;
            }
            return pre;
        }
    
        // TODO: 反轉linked
        bool isPalindrome(ListNode* head) {
            ListNode* mid = middleNode(head); // 找中間
            ListNode* head2 = reverseList(mid);// 反轉
            while(head2){
                if(head->val!=head2->val){
                    return false;        
                }
                head = head->next;
                head2 = head2->next;
            }
            return true;
        }
    };