// 解法 1：模擬
class Solution {
    public:
        bool hasAlternatingBits(int n) {
            int prev=-1; // 紀錄前一位是1還是0
            int cur; // 當下的值
            while(n){
                cur = n%2;
                if(cur == prev) return false; // 檢查
                // 為下一輪作處裡
                prev = cur;
                n/=2;
            }
            return true;
        }
    };

// 解法 2：位運算
class Solution {
    public:
        bool hasAlternatingBits(int n) {
            long a = n ^ (n >> 1); // 開long避免溢位
            return (a & (a + 1)) == 0;
        }
    };