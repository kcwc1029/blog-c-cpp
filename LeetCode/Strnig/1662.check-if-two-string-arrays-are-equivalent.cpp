// 法1：字串拼接
// 負責串接
string strCat(vector<string>& s){
    string ans = "";
    for(string c:s){
        ans+=c;
    }
    return ans;
}
bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    return strCat(word1) == strCat(word2);
}


// 法2：雙指針比對
bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    int p1 = 0, p2 = 0, i = 0, j = 0;
    while (p1 < word1.size() && p2 < word2.size()){
        // 判斷 不同就false
        if (word1[p1][i] != word2[p2][j]) return false;
        i++;
        // 跳到下一個字串
        if (i == word1[p1].size()){
            i=0;
            p1++;
        }
        j++;
        // 跳到下一個字串
        if (j == word2[p2].size()) {
            p2++;
            j = 0;
        }
    }
    return true;
}