int findContentChildren(vector<int>& g, vector<int>& s) {
    sort(g.begin(), g.end());
    sort(s.begin(), s.end());
    int p = 0; // 指向【當前餵到哪一位孩子】
    for(int i:s){ // 遍歷餅乾
        if(p<g.size()&& i>=g[p]){
            p++;
        }
    }
    return p;
}