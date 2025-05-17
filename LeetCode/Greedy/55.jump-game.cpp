bool canJump(vector<int>& nums) {
        int k = 0; // 記錄當下跳最遠距離
        int i = 0; // 當下跳的進度
        while(i<nums.size()){
            if (i > k) return false;
            k = max(k, i + nums[i]); // 更新可以跳得最遠距離
            i++;
        }
        return true;
    }