class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n = prices.size();
            int maxprofit = 0; // 最大獲利
            int minprice = INT_MAX;
            for(int i=0;i<n;i++){
                // 順序沒差
                maxprofit = max(maxprofit, (prices[i]-minprice));
                minprice = min(minprice, prices[i]);
    
            }
            return maxprofit;
        }
    };