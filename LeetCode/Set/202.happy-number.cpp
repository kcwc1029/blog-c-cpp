class Solution {
    public:
        // 解法1
        int getNext(int n){
            int num = 0;
            while(n>10){
                int i = n%10;
                n/=10;
                num+=(i*i);
            }
            return num;
        }
    
        bool isHappy(int n) {
            set<int>s;
            while(n!=1 && s.find(n) == s.end()){
                s.insert(n);
                n = getNext(n);
            }
            // 跑出迴圈條件：
            // n=1
            // n 重複了
            return n==1;
        }
    };