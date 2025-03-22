#include <stdio.h>
#include <stdlib.h>
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    // m：nums1 中的有效數字個數
    // n：nums2 中的有效數字個數
    
    int p1=0, p2=0; // 宣告指針
    int ans[m + n]; // 宣告新陣列
    int cur; // 佔存目前最小的值
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
}

// 測試函式
void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int nums1[10] = {1, 2, 3, 0, 0, 0}; // 必須要有足夠的空間來存放 nums2
    int nums2[3] = {2, 5, 6};
    int m = 3, n = 3;

    merge(nums1, 10, m, nums2, 3, n);
    printArray(nums1, m + n);  // 輸出：1 2 2 3 5 6
    return 0;
}
