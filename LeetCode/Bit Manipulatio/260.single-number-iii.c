int* singleNumber(int* nums, int numsSize, int* returnSize) {
    int xorsum = 0;
    for (int i = 0; i < numsSize; i++) {
        xorsum ^= nums[i];
    }

    // 找出最低位的 1，考慮 INT_MIN 的特殊情況
    int lsb = (xorsum == INT_MIN ? xorsum : xorsum & (-xorsum));

    // 分組並計算每組的異或結果
    int type1 = 0, type2 = 0;
    for (int i = 0; i < numsSize; i++){
        if (nums[i] & lsb) {
            type1 ^= nums[i]; // 該位為 1 的組
        } else {
            type2 ^= nums[i]; // 該位為 0 的組
        }
    }

    // 建立要回傳的陣列
    int *ans = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;
    ans[0] = type1;
    ans[1] = type2;
    return ans;
}