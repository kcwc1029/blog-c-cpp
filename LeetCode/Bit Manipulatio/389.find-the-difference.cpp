// 解法 1：map
class Solution {
    public:
        char findTheDifference(string s, string t) {
            map<char, int> m;
            for(char ch:s) m[ch]++;
            for(char ch:t){
                m[ch]--;
                if(m[ch]<0) return ch;
            }
            return ' ';
        }
    };





// 解法 2：位運算
class Solution {
    public:
        char findTheDifference(string s, string t) {
            int ans = 0;
            for(char ch:s) ans^=ch;
            for(char ch:t) ans^=ch;
            return ans;
        }
    };