class Solution {
    public:
        int longestPalindrome(string s) {
            map<char, int> m;
            int ans = 0;
            for(char ch:s) m[ch]++;
            for(auto p:m){
                int v = p.second;
                ans += v/2*2; //幫她做兩邊的填充
                // 檢查是否可以為回文
                if(v % 2 == 1 && ans % 2 == 0) ans++; // 這邊的+1是中心點的數
            }
            return ans;
        }
    };