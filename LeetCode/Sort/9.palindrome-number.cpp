// 解法 1：轉字串後，用雙指針判斷
class Solution {
    public:
        bool isPalindrome(int x) {
            if(x<0) return false;
            string s = to_string(x);
            int n = s.size();
            int left = 0, right = n-1;
            while(left<right){
                // 判斷
                if(s[left]==s[right]){
                    left++;
                    right--;
                }else{
                    return false;
                }
            }
            return true;
        }
    };


// 解法 2：用數學的方式
class Solution {
    public:
        int mySqrt(int x) {
            if (x == 0 || x == 1) return x;
            int left = 0, right = x; // right 初始化為 x，避免無效的範圍
            while (left <= right) { // 條件應該包含等號，確保所有範圍都被檢查
                int mid = left + (right - left) / 2;
    
                if (mid > x / mid) {
                    right = mid - 1; // mid 太大，縮小右邊界
                } else if (mid < x / mid) {
                    left = mid + 1; // mid 太小，增大左邊界
                } else {
                    return mid; // 找到精確的平方根
                }
            }
            return right; // 回傳最接近的整數平方根
        }
    };

// 解法 3：用雙指針去檢查。
class Solution {
    public:
        bool isPalindrome(int x) {
            if(x<0) return false;
            string s = to_string(x);
            int n = s.size();
            int left = 0, right = n-1;
            while(left<right){
                // 判斷
                if(s[left]==s[right]){
                    left++;
                    right--;
                }else{
                    return false;
                }
            }
            return true;
        }
    };