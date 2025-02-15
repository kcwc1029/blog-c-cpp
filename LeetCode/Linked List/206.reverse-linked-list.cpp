// 解法1：三指針
class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            /*
            這支函式用來反轉單向鏈結串列(ListNode)，方法如下:
            1. 使用三個指針: 
               - cur: 指向目前節點 
               - pre: 指向前一個節點(初始為nullptr)
               - temp: 用來暫存cur的下一個節點(避免指針失聯)
            2. 迴圈中:
               - 先用temp紀錄cur->next
               - 將cur->next指向pre，完成反轉鏈結
               - 接著pre與cur同時往前推進
            3. 迴圈結束後，pre會成為新的表頭，直接回傳pre即可
            */
            
            ListNode* cur = head;
            ListNode* pre = nullptr;
            
            while(cur != nullptr) {
                ListNode* temp = cur->next; // 暫存下一個節點
                cur->next = pre;            // 反轉指向前一個節點
                pre = cur;                  // pre往前移動
                cur = temp;                 // cur往前移動
            }
            
            return pre; // pre即為反轉後的新表頭
        }
    };

// 解法2：遞迴解法
class Solution {
    public:
        // 利用遞迴反轉鏈結串列的輔助函式
        ListNode* f(ListNode* cur, ListNode* pre) {
            // 遞迴終止條件：目前節點為空時，前一個節點就是新的表頭
            if(cur == nullptr) return pre;
            // 先遞迴到底，取得反轉後的「新表頭」
            ListNode* temp = f(cur->next, cur);
            // 反轉指針：讓目前節點指向前一個節點
            cur->next = pre;
            // 回傳新表頭給上一層
            return temp;
        }
    
        ListNode* reverseList(ListNode* head) {
            return f(head, nullptr);
        }
    };