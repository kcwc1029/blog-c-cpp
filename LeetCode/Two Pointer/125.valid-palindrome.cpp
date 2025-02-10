// 解法1
class Solution {
    public:
        bool isPalindrome(string s) {
            string s_temp;
            // 檢查是否為字串
            for(char ch:s){
                if(isalnum(ch)){
                    s_temp+=tolower(ch);
                }
            }
            // 檢查回文
            string s_reverse = s_temp;
            reverse(s_reverse.begin(), s_reverse.end());
            return s_reverse == s_temp;
        }
    };
    // Your runtime beats 28.54 % of cpp submissions
    // Your memory usage beats 11.04 % of cpp submissions (9.6 MB)


// 解法 2：
class Solution {
    public:
        // 解法2：雙指針
        bool isPalindrome(string s) {
            int n = s.size();
            int left = 0, right = n-1;
            while(left<right){
                // 處理左指針不符規範(不是數值，就繼續縮)
                while(left<right && !isalnum(s[left])) left++;
                // 處理右指針不符規範
                while(left<right && !isalnum(s[right])) right--;
                // 檢查回文
                if(left<right){
                    if (tolower(s[left]) != tolower(s[right])) return false;
                    left++;
                    right--;
                }
            }
            return true;
        }
    };
    // Your runtime beats 100 % of cpp submissions
    // Your memory usage beats 52.4 % of cpp submissions (9 MB)
