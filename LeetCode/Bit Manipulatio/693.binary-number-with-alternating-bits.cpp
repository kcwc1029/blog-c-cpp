// 解法 1：模擬
class Solution {
    public:
        bool hasAlternatingBits(int n) {
            int check = -1;
            while(n){
                int temp = n&1;
                if(check==temp) return false;
                check=temp;
                n>>=1;
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