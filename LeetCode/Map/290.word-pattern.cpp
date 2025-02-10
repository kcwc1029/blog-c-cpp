class Solution {
    public:
        bool wordPattern(string pattern, string s) {
            map<char, string> p2s;
            map<string, char> s2p;
            int n = s.size();  // 這邊一定要以s為長度，因為後面的ij都是用他判斷
            // 針對字串s要做切割 -> i頭j尾巴
            int i=0;
            string s_temp = "";
            for(char ch:pattern){
                // 如果已經超過字串 s 的長度，返回 false -> 根據最後【i = j + 1;】
                if (i >= n) return false;
    
                int j = i; // 宣告尾巴
                while(j<n && s[j]!=' ')j++;
                s_temp = s.substr(i, j - i);
                // 雙向映射，就跟205一樣
                if(p2s.count(ch) && p2s[ch]!=s_temp) return false;
                if(s2p.count(s_temp) && s2p[s_temp]!=ch) return false;
                p2s[ch]=s_temp;
                s2p[s_temp]=ch;
                // 往下一個新單字
                i = j + 1;
            }
            return i>=n;
        }
    };