class Solution {
    public:
        // TODO: 判斷質數
        vector<bool> isPrime_table(int n){
            vector<bool> isPrime(n + 1, true);  // 全部初始化為 true
            isPrime[0] = false;
            isPrime[1] = false;
            for (int i = 2; i * i <= n; i++) {
                if (isPrime[i]) {
                    for (int j = i * i; j <= n; j += i) {
                        isPrime[j] = false;
                    }
                }
            }
            return isPrime;
        }
    
        // TODO: 計算1的個數
        int countOnes(int n) {
            int count = 0;
            while (n > 0) {
                n &= (n - 1); // 將最低位的 1 清除
                count++;
            }
            return count;
        }
        
        // TODO: 主函數
        int countPrimeSetBits(int left, int right) {
            vector<bool> prime = isPrime_table(right);
            int ans = 0;
            for(int i=left;i<right+1;i++){
    
                if(prime[countOnes(i)]) ans++;
            }
            return ans;
            
        }
    };