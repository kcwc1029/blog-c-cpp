int maxProfit(vector<int>& prices) {
	int profit = 0;
	for (int i = 1; i < prices.size(); i++){
		int tmp = prices[i] - prices[i - 1];
		if (tmp > 0) profit += tmp;
	}
	return profit;
}