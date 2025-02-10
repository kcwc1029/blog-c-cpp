class Solution {
    public:
        bool detectCapitalUse(string word) {
            if (allLower(word)) return true;
            if (allUpper(word)) return true;
    
            string subWord = word.substr(1);
            if (isupper(word[0]) && allLower(subWord)) return true;        else return false;
            return false;
        }
    
        // 檢查是否全小寫
        bool allLower(const string& s) {
            for (char c : s) {
                if (!islower(c)) return false;
            }
            return true;
        }
    
        // 檢查是否全大寫
        bool allUpper(const string& s) {
            for (char c : s) {
                if (!isupper(c)) return false;
            }
            return true;
        }
    };