int jump(vector<int>& nums) {
        int ans = 0; // 記錄跳幾次
        int start = 0; // 這一輪可選的起跳點起始 index
        int end = 1; // 這一輪可選的起跳點結束 index（不含）
        while(end < nums.size()){
            int k = 0; // 從這圈的跳板中，找出下一圈最多能跳到哪裡
            for (int i = start; i < end; i++){
                k = max(k, i+nums[i]);
            }
            // 更新下一次跳躍位置
            start = end;
            end = k+1;
            ans++;
        }
        return ans;
    }