// 解法 1：用乘法的方式
class Solution {
    public:
        bool isPowerOfTwo(int n) {
            if(n==0) return false;
            int ans = 1;
            for(int i=0;i<31;i++){ // 當ans為1時，代表已經位移1次了
                if(ans==n) return true;
                ans<<=1;
            }
            return false;
        }
    };

// 解法 2：用除法的方式
class Solution {
    public:
        bool isPowerOfTwo(int n) {
            if(n==0) return false;
            while(n%2==0){
                n>>=1;
            }
            return n==1;
        }
    };

// 解法 3：利用 n&(-n)取得最低位元 1，再去 XOR 檢查
class Solution {
    public:
        bool isPowerOfTwo(int n) {
            return n > 0 && (n ^ (n & -n)) == 0;
        }
    };
