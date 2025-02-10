// 解法 1：排序後比對
class Solution {
    public:
        // 解法1
        bool isAnagram(string s, string t) {
            sort(s.begin(), s.end());
            sort(t.begin(), t.end());
            return s == t;
        }
    };




    
// 解法 2：map 紀錄次數
class Solution {
    public:
        // 解法2：map
        bool isAnagram(string s, string t) {
            map<char, int> m;
            for(char c:s)m[c]++;
            for(char c:t){
                if(m.count(c)){
                    m[c]--;
                    if(m[c]==0) m.erase(c);
                }
                else return false;
            }
            return m.empty();
        }
    };