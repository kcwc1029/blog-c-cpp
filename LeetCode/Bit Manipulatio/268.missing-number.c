// 解法01：使用內建qsort去解
int comp(const void *p, const void *q){
    int x = *(int *)p;
    int y = *(int *)q;
    return x-y;
}

int missingNumber(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), comp);
    for(int i=0;i<numsSize;i++){
        if(i!=nums[i]){
            return i;
        }
    }
    return numsSize;
}


// 解法02：使用bubble sort 去解
void swap(int *p, int *q){
    int temp = *p;
    *p = *q;
    *q = temp;
}

// void bubbleSort(int arr[], int n);
void bubbleSort(int *arr, int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j] > arr[j + 1]){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int missingNumber(int* nums, int numsSize) {
    bubbleSort(nums, numsSize);
    for(int i=0;i<numsSize;i++){
        if(i!=nums[i]){
            return i;
        }
    }
    return numsSize;
}