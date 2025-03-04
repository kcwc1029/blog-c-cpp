// 解法01：額外開一個數組
void rotate(vector<int>& nums, int k) {
	int n = nums.size();
	vector<int> v(n);
	for (int i = 0; i < n; ++i){
		v[(i + k) % n] = nums[i];
	}
	nums.assign(v.begin(), v.end());
}


// 解法02：陣列翻轉
void rotate(vector<int>& nums, int k) {
	k %= nums.size();
	reverse(nums.begin(), nums.end());         // 反轉整個陣列
	reverse(nums.begin(), nums.begin() + k);   // 反轉前 k 個元素
	reverse(nums.begin() + k, nums.end());     // 反轉剩下的元素
}