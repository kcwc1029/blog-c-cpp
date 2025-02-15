class Solution {
    public:
        ListNode* removeElements(ListNode* head, int val) {
            ListNode* dummy = new ListNode(0); // 最後返回
            dummy->next = head;
            ListNode* curr = dummy;
            while(curr->next!=nullptr){
                // 先記錄下一個點(因為要判斷，這個點484要刪除的)
                ListNode* temp = curr->next;
                if(temp->val==val){
                    // 確定要珊：curr->next指向temp的下一個(跳過temp)
                    curr->next = temp->next;
                }else{
                    curr = curr->next;
                }
            }
            return dummy->next;
        }
    };