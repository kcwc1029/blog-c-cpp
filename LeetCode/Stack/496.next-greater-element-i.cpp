class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        unordered_map<int, int> m;  // 紀錄「這個數字 → 它的下一個較大數字」-> 用stact作
        // 依據nums2 搭配stack來做表
        for(int i:nums2){
            while(!st.empty() && i>st.top()){
                m[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }

        // 填答案
        vector<int> ans(nums1.size(), -1);
        for(int i=0;i<nums1.size();i++){
            if(m.count(nums1[i])){
                ans[i]=m[nums1[i]];
            }
            
        }
        return ans;
    }
};