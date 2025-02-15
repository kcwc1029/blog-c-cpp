class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            ListNode* dummy = new ListNode(0); // 最後返回
            ListNode* curr = dummy; // 紀錄加總後的節點
            while(list1!=nullptr && list2!=nullptr){
                if(list1->val < list2->val){
                    // 把她接在curr(回傳值)的下一個
                    curr->next = list1;
                    // 更新當前
                    curr = curr->next;
                    list1 = list1->next;
                }else{
                    // 把她接在curr(回傳值)的下一個
                    curr->next = list2;
                    // 更新當前
                    curr = curr->next;
                    list2 = list2->next;
                }
            }
            // 離開迴圈->剩一邊有資料
            if(list1!=nullptr)curr->next = list1;
            else curr->next = list2;
    
            return dummy->next;
        }
    };