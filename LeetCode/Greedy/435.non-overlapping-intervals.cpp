int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];  // 按照結束時間排序
        });

        
        int ans = 0;
        int prevEnd = intervals[0][1]; // 記錄前一個區間的結束時間
        for(int i=1;i<intervals.size();i++){
            // 如果區間重疊
            if(intervals[i][0] < prevEnd){
                ans++;
            }else{
                prevEnd = intervals[i][1];
            }
        }
        return ans;
    }