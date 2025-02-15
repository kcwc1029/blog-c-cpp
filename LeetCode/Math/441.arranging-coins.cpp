// 解法 1：二分
class Solution {
    public:
        int arrangeCoins(int n) {
            int left = 1, right = n;
            while(left<=right){
                int mid = left + (right-left)/2;
                long temp = (long)mid * (mid + 1) / 2; // 確保不溢位
                if (temp == n) {
                    return mid; // 找到精確解
                } else if (temp > n) {
                    right = mid - 1; // 過多硬幣，縮小範圍
                } else {
                    left = mid + 1; // 硬幣不足，增加範圍
                }
            }
            return right;
        }
    };

// 解法 2：數學
class Solution {
    public:
        int arrangeCoins(int n) {
            return (int)(-1+(sqrt((long)8*n+1)))/2;
        }
    };