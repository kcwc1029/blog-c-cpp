#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize) {
    // nums 陣列本身
    // numsSize nums陣列他的本身長度
    // returnSize 最後做完的陣列，也需要回傳長度給他
    *returnSize = numsSize;

    // 建立要回傳的陣列
    int *ans = (int*)malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++){
        int temp_sum = 0;
        for(int j=0;j<numsSize;j++){
            if(nums[j]<nums[i]) temp_sum++;
        }
        ans[i] = temp_sum;
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
    int nums01[] = {6,5,4,8};
    int returnSize01;
    int *result01 = smallerNumbersThanCurrent(nums01, 4, &returnSize01);
    print(result01, returnSize01);

    int nums02[] = {7,7,7,7,7};
    int returnSize02;
    int* result02 = smallerNumbersThanCurrent(nums02, 5, &returnSize02);
    print(result02, returnSize02);
    return 0;
}


