#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int removeElement(int* nums, int numsSize, int val) {
    int left = 0;
    for (int right = 0; right < numsSize; right++) {
        if (nums[right] != val) {
            nums[left] = nums[right];
            left++;
        }
    }
    return left;  
}

int main() {
    int nums01[] = {3, 2, 2, 3};
    int numsSize = sizeof(nums01) / sizeof(nums01[0]);
    int val = 3;
    int newSize = removeElement(nums01, numsSize, val);
    printf("New length: %d\n", newSize);

    int nums02[] = {0,1,2,2,3,0,4,2};
    numsSize = sizeof(nums02) / sizeof(nums02[0]);
    val = 2;
    newSize = removeElement(nums01, numsSize, val);
    printf("New length: %d\n", newSize);
    return 0;
}
