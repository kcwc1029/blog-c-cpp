// 暴力
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    vector<int> v;
    int n = nums.size();
    for(int i=0;i<n;i++){
        int temp_sum = 0; // 每一輪去計算
        for(int j=0;j<n;j++){
            if(nums[j]<nums[i]) temp_sum++;
        }
        v.push_back(temp_sum);
    }
    return v;
}


// 排序
vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
    int n = nums.size();
    vector<pair<int, int>> v; //一開始將值裝進來
    vector<pair<int, int>> ans(n, 0);
    for (int i = 0; i < n; i++){
        // 放值：法1
        // v.push_back(make_pair(nums[i], i)); // 值、位置
        // 放值：法2
        v.emplace_back(nums[i], i); // 值、位置
    }
    sort(v.begin(), v.end());

    int prev; // 紀錄有幾個(要放進ans)
    for (int i = 0; i < n; i++){
        if( v[i].first != v[i-1].first) {
            prev = i;
        }
        ans[v[i].second] == prev;
    }
    return ans;
}
