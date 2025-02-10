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