class Solution {
    public:
        vector<string> generateParenthesis(int n) {
            vector<string> ans;
            string s="";
            // 開使backtracking
            backTracking(n, 0, 0, s, ans);
            return ans;
        }
        void backTracking(int n, int left, int right, string s, vector<string>& ans){
            // 非法條件
            if(left<right) return;
            // 做完條件
            if(left==n && right==n){
                ans.push_back(s);
                return;
            }
            // 繼續遞迴
            if (left < n) backTracking(n, left + 1, right, s + "(", ans);  // 添加左括號
            if (right < left) backTracking(n, left, right + 1, s + ")", ans);  // 添加右括號
        }
    };