vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    vector<int> ans;
    unordered_map<int, int> m;
    // 紀錄num出現次數
    for(int i:nums1){
        m[i]++;
    }

    for(int i:nums2){
        if(m[i]>0){
            ans.push_back(i);
            m[i]--;
        }
            
    }
    return ans;
}