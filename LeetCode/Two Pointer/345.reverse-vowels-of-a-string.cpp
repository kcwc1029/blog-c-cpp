class Solution {
    public:
        set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
    
        // 檢查字元是否為母音
        bool isVowel(char ch) {
            return vowels.count(ch) > 0;
        }
        // 反轉字串中的母音
        string reverseVowels(string s) {
            int left = 0, right = s.size() - 1;
            while (left < right) {
                while (left < right && !isVowel(s[left])) left++;
                while (left < right && !isVowel(s[right])) right--;
                if (left < right) {
                    swap(s[left], s[right]);
                    left++;
                    right--;
                }
            }
            return s; // 返回處理後的字串
        }
    };