int distributeCandies(vector<int>& candyType) {
    // 計算糖果種類 => set
    unordered_set<int> s(candyType.begin(), candyType.end());
    return min(s.size(), candyType.size()/2);
}