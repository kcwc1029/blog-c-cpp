class Solution {
    public:
        vector<vector<int>> ans;
        void backtracking(vector<int>& candidates, vector<int>& path, int target, int startIndex){
            // 終止條件
            if(target<0) return;
            if(target==0){
                ans.push_back(path);
                return;
            }
    
            for(int i=startIndex;i<candidates.size();i++){
                // 去重邏輯：同一層中出現重複數字時跳過
                // 比較：【當前數字】是否在【之前】出現過
                if (i > startIndex && candidates[i] == candidates[i - 1]) continue;
                path.push_back(candidates[i]);
                backtracking(candidates, path, target - candidates[i], i + 1);
                path.pop_back();
            }
        }
    
        vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
            vector<int> path;
            sort(candidates.begin(), candidates.end());
            // backtracking(candidates, path, target, startIndex);
            backtracking(candidates, path, target, 0);
            return ans;
        }
    };