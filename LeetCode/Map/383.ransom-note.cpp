class Solution {
    public:
        bool canConstruct(string ransomNote, string magazine) {
            map<char, int> m;
            for(char ch:magazine){
                m[ch]++;
            }
            for(char ch:ransomNote){
                m[ch]--;
                if(m[ch]<0) return false;
            }
            return true;
        }
    };