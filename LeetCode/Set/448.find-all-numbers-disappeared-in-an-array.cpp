vector<int> findDisappearedNumbers(vector<int>& nums) {
    vector<int> ans;
    unordered_set<int> s(nums.begin(), nums.end());
    for(int i=1;i<nums.size()+1;i++){
        if(!s.count(i)){
            ans.push_back(i);
        }
    }
    return ans;
}