bool canJump(vector<int>& nums) {
    int k = 0; // 紀錄最遠距離
    int n = nums.size();
    for(int i=0;i<n;i++){
        if (i > k) return false;
        k = max(k, i + nums[i]);
    }
    return true;
}