class Solution {
    public:
        string f(string& s1, string& s2){
            int n = min(s1.size(), s2.size());
            int index = 0;
            while(index < n && s1[index] == s2[index]){
                index++;
            }
            return s1.substr(0, index);
        }
    
        string longestCommonPrefix(vector<string>& strs) {
            int n = strs.size();
            string ans = strs[0];
            for(int i=1;i<n;i++){
                // NOTE: 每次都跟第0個比
                ans = f(ans, strs[i]);
                if(ans == "") break;
            }
    
            return ans;
        }
    };