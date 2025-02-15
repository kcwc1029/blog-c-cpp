// 解法：DB
class Solution {
    public:
        int fib(int n) {
            if(n<2) return n; // 不加這一行的話，會跳heap-buffer-overflow
            vector<int> v(n + 1);
            v[0]=0;
            v[1]=1;
            for(int i=2;i<n+1;i++){
                v[i]=v[i-1]+v[i-2];
            }
            return v[n];
        }
    };