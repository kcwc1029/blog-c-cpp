class Solution {
    public:
        void backtracking(vector<vector<int>>& ans,vector<int>& temp,vector<int>& nums,int x){
            // 依照要求，本題要先放，再做檢查
            ans.push_back(temp);
            // 終止條件
            if(x==nums.size()) return;
    
            for(int i=x;i<nums.size();i++){
                temp.push_back(nums[i]);
                backtracking(ans, temp, nums, i+1);
                temp.pop_back();
            }
        }
        vector<vector<int>> subsets(vector<int>& nums) {
            vector<vector<int>> ans;
            vector<int> temp;
            backtracking(ans, temp, nums, 0);
            return ans;
        }
    };