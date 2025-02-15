class Solution {
    public:
        ListNode* partition(ListNode* head, int x) {
            // 建立兩個空節點跟各自指針
            ListNode *smallDummy = new ListNode(0);
            ListNode *bigDummy = new ListNode(0);
            ListNode *small = smallDummy;
            ListNode *big = bigDummy;
            // 開始跑原本迴圈
            while(head != nullptr){
                if(head->val<x){
                    small->next = head;
                    small = small->next;
                }else{
                    big->next = head;
                    big = big->next;
                }
                head = head->next;
            }
            // 區分成兩條後
            // 小的尾吧->大的頭
            small->next = bigDummy->next;
            // 大的尾吧皆nullptr
            big->next = nullptr;
            return smallDummy->next;
        }
    };