class Solution {
    public:
        int maxArea(vector<int>& height) {
            int n = height.size();
            int left = 0, right = n-1;
            int ans = 0; // 紀錄容量
            while(left<right){
                int area = min(height[left], height[right]) * (right-left); // 計算裝滿面積
                ans = max(ans, area);
                // 指針往內縮(縮比較短的耐一個指針)
                if(height[left]<=height[right]) left++;
                else right--;
            }
            return ans;
        }
    };