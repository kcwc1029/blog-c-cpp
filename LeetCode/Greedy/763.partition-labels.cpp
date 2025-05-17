vector<int> partitionLabels(string s) {
    unordered_map<char, int> m; // 記錄每個字母最後一次出現的位置
    // 步驟1：記錄每個字母最後出現的位置
    for(int i=0;i<s.size();i++){
        m[s[i]] = i;
    }

    // 步驟2：遍歷字串並分區段
    vector<int> ans;
    int head = 0, end = 0;
    for(int i=0;i<s.size();i++){
        end = max(end, m[s[i]]); // 更新目前區段的最遠邊界
        if(i == end){ // 確認跌代當下是最遠的距離 => 可以切了
            ans.push_back(end-head+1);
            head = end+1;
        }
    }   

    return ans;
}