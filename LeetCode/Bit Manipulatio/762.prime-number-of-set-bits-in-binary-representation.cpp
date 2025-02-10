class Solution {
    public:
        // TODO: 判斷質數
        bool isPrime(int n) {
            if (n <= 1) return false; // 1 和小於 1 的數不是質數
            if (n == 2 || n == 3) return true; // 2 和 3 是質數
            if (n % 2 == 0 || n % 3 == 0) return false; // 排除能被 2 或 3 整除的數
    
            for (int i = 5; i * i <= n; i += 6) { // 減少檢查次數，跳過偶數
                if (n % i == 0 || n % (i + 2) == 0) return false;
            }
            return true;
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
    
        int countPrimeSetBits(int left, int right) {
            int ans = 0;
            for(int i=left;i<right+1;i++){
                if(isPrime(countOnes(i))) ans++;
            }
            return ans;
    
        }
    };