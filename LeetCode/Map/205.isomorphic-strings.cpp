class Solution {
    public:
        bool isIsomorphic(string s, string t) {
            map<char, char>s2t, t2s;
            int n = s.size(); // 題目有說s跟t長度依樣
            for(int i=0;i<n;i++){
                char x = s[i], y = t[i];
                if((s2t.count(x) && s2t[x]!=y) || (t2s.count(y) && t2s[y]!=x)){
                    return false;
                }
                // 紀錄
                s2t[x] = y;
                t2s[y] = x;
            }
            return true;
        }
    };