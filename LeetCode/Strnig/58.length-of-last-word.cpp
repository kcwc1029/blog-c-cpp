class Solution {
    public:
        int lengthOfLastWord(string s) {
            int i = s.size()-1;
            while(s[i]==' ') i--;
            int j = i-1;
            while(j>-1 && s[j]!=' ') j--;
            return i-j;
        }
    };