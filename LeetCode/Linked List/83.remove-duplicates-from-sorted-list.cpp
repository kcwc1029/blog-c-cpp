class Solution {
    public:
        ListNode* deleteDuplicates(ListNode* head) {
            // 空集合檢查
            if(head==nullptr)return head;
    
            ListNode* dummy = new ListNode(0); // 創建真正的 dummy 節點
            dummy->next = head;
            ListNode* curr = head;
            while(curr->next){
                if(curr->val == curr->next->val){
                    curr->next = curr->next->next;
                }else{
                    curr = curr->next;
                }
            }
            return dummy->next;
        }
    };