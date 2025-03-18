// 解法 1：額外開一個空間，兩兩比較，然後再把值丟到新的 arr。
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int p1=0, p2=0; // 宣告指針
    int ans[m+n]; // 宣告新陣列
    int cur; // 佔存目前最小的值

    // 重複比較 -> 條件：還有值
    // 這邊我用OR，表示兩個arr間，只要有其中一個還有數值，就會繼續運行
    while (p1<m || p2<n){
        // 可能條件：
        // nums1[p1]<nums2[p2] => 把nums1[p1]排到新arr
        // nums1[p1]>=nums2[p2] => 把nums2[p2]排到新arr ->這個條件我放最後else寫
        // nums1跑完了 => => 把nums2[p2]排到新arr (檢查邊界要先寫，不然最後會超出邊界爆錯)
        // nums2跑完了 => => 把nums1[p1]排到新arr (檢查邊界要先寫，不然最後會超出邊界爆錯)
        if(p2 == n){
            cur = nums1[p1];
            p1++;
        }else if(p1 == m){
            cur = nums2[p2];
            p2++;
        }else if(nums1[p1]<nums2[p2]){
            cur = nums1[p1];
            p1++;
        }else{
            cur = nums2[p2];
            p2++;
        }
        // 統一放
        ans[p1+p2-1] = cur;
    }

    // 最後再倒回去
    for(int i=0;i<m+n;i++){
        nums1[i] = ans[i];
    }
    
};

// 解法 2：進行優化。在 num1 排就好啦~
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int p1=m-1, p2=n-1; // 宣告指針
    int tail =(m+n)-1; // 尾巴的那根指針
    int cur; // 佔存目前最大的值
    // 跑到甚麼時候?
    while(p1>-1 ||p2>-1){
        // 檢查邊界
        if(p1==-1){
            cur  = nums2[p2];
            p2--;
        }else if (p2 == -1) {
            cur  = nums1[p1];
            p1--;
        }else if(nums1[p1] > nums2[p2]){
            cur  = nums1[p1];
            p1--;
        }else{
            cur  = nums2[p2];
            p2--;
        }
        nums1[tail] = cur;
        tail--;
    }
}
