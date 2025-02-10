class Solution {
    public:
        vector<vector<int>> ans;
        vector<vector<int>> permuteUnique(vector<int>& nums) {
            backtracking(nums, 0);
            return ans;
        }
        void backtracking(vector<int>& nums, int startindex){
            // 終止條件
            if(startindex == nums.size()){
                ans.push_back(nums);
                return;
            }
            // NOTE: 查找重複
            set<int> s;
            for(int i=startindex;i<nums.size();i++){
                if(s.find(nums[i])!=s.end()) continue;
                s.insert(nums[i]);
                swap(nums[i], nums[startindex]);
                backtracking(nums, startindex+1);
                swap(nums[i], nums[startindex]);
            }
        }
    };