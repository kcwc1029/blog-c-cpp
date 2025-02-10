class Solution {
    public:
        bool isSubsequence(string s, string t) {
            int n = s.size(), m = t.size();
            int i=0, j=0;
            while(i<n && j<m){
                if(s[i] == t[j]) i++; // 目標符合，繼續往前
                j++; //他就是一直網前就對了
            }
            return i == n;
        }
    };