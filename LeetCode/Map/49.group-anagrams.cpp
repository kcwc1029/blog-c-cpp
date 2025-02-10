class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            vector<vector<string>> ans;
            map<string, vector<string>> m; // 紀錄排序後的樣子
            for(string s: strs){
                string temp = s;
                sort(temp.begin(), temp.end());
                m[temp].push_back(s);
            }
    
            for(auto q:m){
                ans.push_back(q.second);
            }
            return ans;
        }
    };