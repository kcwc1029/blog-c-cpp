// 解法 1：查看使否為 1 的次方

class Solution {
    public:
        bool isPowerOfFour(int n) {
            // if(n<0) return false;
            // int x = (int)sqrt(n);
            // return pow(x,2)==n && n && (x & -x) == x;
            while(n && n%4==0) n/=4;
            return n==1;
        }
    };

// 解法 2： 檢查是否為 4 的次方=>檢查開跟號後是否為 2 的次方
class Solution {
    public:
        bool isPowerOfFour(int n) {
            if(n<0) return false;
            int x = (int)sqrt(n);
            return pow(x,2)==n && n && (x & -x) == x;
        }
    };













