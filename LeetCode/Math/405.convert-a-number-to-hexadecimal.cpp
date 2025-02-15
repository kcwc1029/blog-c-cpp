class Solution {
    public:
        string toHex(int num) {
            string s = "0123456789abcdef";
            string ans = "";  // 存儲結果字串
    
            if(num==0)return "0";
            // 將 num 轉換為無符號數(處裡負數轉正數)
            unsigned int n = num;
    
            // 開始轉16進制
            while (n) {
                ans = s[n & 0xF] + ans;  // 提取最低 4 位並找到對應字元
                n >>= 4;  // 右移 4 位，處理下一組 4 位
            }
            return ans;
        }
    };