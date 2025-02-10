class Solution {
    public:
        // 做map
        map<char, int> m = {
            {'I', 1},
            {'V', 5},
            {'X', 10},
            {'L', 50},
            {'C', 100},
            {'D', 500},
            {'M', 1000},
        };
        int romanToInt(string s) {
            int ans = 0;
            int n = s.size();
            for(int i=0;i<n-1;i++){
                // 取數值
                int x = m[s[i]];
                int y = m[s[i + 1]];
                if(x<y) x = -(x);
                ans += x;
            }
            ans += m[s[n-1]];
            return ans;
        }
    };