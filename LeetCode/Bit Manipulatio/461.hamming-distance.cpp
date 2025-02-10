class Solution {
    public:
        // 給一個整數，返回該數轉二進位後有幾個1
        int f(int n){
            int ans = 0;
            while(n){
                n = n&(n-1);
                ans++;
            }
            return ans;
        }
    
        int hammingDistance(int x, int y) {
            // 先做XOR
            int n = x^y;
            return f(n);
    
        }
    };