class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            set<char> set;
            int n = s.size();
            int ans=0;
            int left=0, right=0;
            while(right<n){
                // 如果當前字符已存在於 set 中，移動左指針並刪除元素
                while(set.find(s[right])!=set.end()){
                    set.erase(s[left]);
                    left++;
                }
                set.insert(s[right]); // 新元素加入
                ans = max(ans, right-left+1); // 更新答案
                right++; // 指針前進
            }
            return ans;
        }
    };s