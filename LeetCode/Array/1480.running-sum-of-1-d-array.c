#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int* runningSum(int* nums, int numsSize, int* returnSize) {
    // nums: 用指標傳進來一個陣列
    // numsSize: 用指標傳進來一個陣列的長度
    // returnSize: 你最後作為的結果(是一格陣列)，它的長度 
    *returnSize = numsSize;
    int *ans = (int*)malloc(numsSize * sizeof(int));
    int sum = 0; // 紀錄累加的數值
    for(int i=0;i<numsSize;i++){
        sum += nums[i];
        ans[i] = sum;
    }
    return ans;
}


void print(int *result, int numsSize) {
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", result[i]); 
    }
    printf("\n");
    free(result); // 釋放整個陣列
}

int main() {
    // 測試範例
    int nums01[] = {1,2,3,4};
    int returnSize01;
    int* result01 = runningSum(nums01, 4, &returnSize01);
    print(result01, returnSize01);

    int nums02[] = {1, 1, 1, 1, 1};
    int returnSize02;
    int* result02 = runningSum(nums02, 5, &returnSize02);
    print(result02, returnSize02);
    return 0;
}


