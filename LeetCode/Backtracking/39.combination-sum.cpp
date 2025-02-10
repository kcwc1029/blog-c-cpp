class Solution {
    public:
        vector<vector<int>> ans;
        void backtracking(vector<int>& candidates, vector<int>& path, int target, int sum, int startIndex){
            // 終止條件
            if(sum>target) return;
            if(sum==target){
                ans.push_back(path);
                return;
            }
            for(int i=startIndex;i<candidates.size();i++){
                sum+=candidates[i];
                path.push_back(candidates[i]);
                backtracking(candidates, path, target, sum, i);
                sum-=candidates[i];
                path.pop_back();
            }
        }
    
        vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
            vector<int> path;
            // backtracking(candidates, path, target, sum, startIndex)
            backtracking(candidates, path, target, 0, 0);
            return ans;
        }
    };