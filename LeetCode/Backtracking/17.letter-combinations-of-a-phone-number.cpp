class Solution {
    public:
        map<char, string> phoneMap{
            {0, ""},
            {1, ""},
            {2, "abc"},
            {3, "def"},
            {4, "ghi"},
            {5, "jkl"},
            {6, "mno"},
            {7, "pqrs"},
            {8, "tuv"},
            {9, "wxyz"}
        };
        void backtracking(vector<string>& ans,
                        string& s,
                        const string& digits,
                        int index){
            // 終止條件：若index等於digits長度，表示已選好全部字母
            if(index==digits.size()){
                ans.push_back(s);
                return ;
            }
    
            int digit=digits[index]-'0';
            string letter=phoneMap[digit];
            for(int i=0;i<letter.size();i++){
                s.push_back(letter[i]);
                backtracking(ans, s, digits, index+1);
                s.pop_back();
            }
        }
    
        vector<string> letterCombinations(string digits) {
            // NOTE: 重組各種s，然後裝晉ans
            vector<string> ans;
            string s;
            // NOTE: 極端條件
            if(digits=="") return ans;
            backtracking(ans, s, digits, 0);
    
            return ans;
        }
    };