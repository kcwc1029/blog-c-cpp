class Solution {
    public:
        vector<vector<int>> ans;
        
        vector<vector<int>> permute(vector<int>& nums) {
            backtracking(nums, 0);
            return ans;
        }
    
        void backtracking(vector<int>& nums, int startIndex){
            // 終止條件：到最後一個
            if(startIndex == nums.size()){
                ans.push_back(nums);
                return;
            }
            for(int i=startIndex;i<nums.size();i++){
                swap(nums[i], nums[startIndex]);
                backtracking(nums, startIndex+1);
                swap(nums[i], nums[startIndex]);
            }
        }
    };