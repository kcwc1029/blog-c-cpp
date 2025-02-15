class Solution {
    public:
        // 就一值除
        bool isPowerOfThree(int n) {
            while(n && n%3==0) n/=3;
            return n==1;
        }
    };