// 用XOR的方式去解
int singleNumber(int* nums, int numsSize) {
    int ans = nums[0];
    for(int i=1;i<numsSize;i++){
        ans ^= nums[i];
    }
    return ans;
}