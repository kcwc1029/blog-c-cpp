class Solution {
    public:
        vector<int> plusOne(vector<int>& digits) {
            int n = digits.size();
            for(int i=n-1;i>-1;i--){
                if(digits[i]!=9){ // 情況1
                    digits[i]+=1;
                    return digits;
                }else{ // 情況2
                    digits[i] = 0;
                }
            }
            // 情況3
            vector<int> ans(n + 1);
            ans[0] = 1;
            return ans;
        }
    };