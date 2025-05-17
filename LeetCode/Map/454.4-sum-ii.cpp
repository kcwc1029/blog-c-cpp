int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
    unordered_map<int, int> map01;
    for(int i:nums1){
        for(int j:nums2){
            map01[i+j]++;
        }
    }

    int ans = 0;
    for(int i:nums3){
        for(int j:nums4){
            ans+= map01[-(i+j)];
        }
    }
    return ans;
}