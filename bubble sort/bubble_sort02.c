#include <stdio.h>
#include <stdlib.h>

// TODO: bobble sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int swapped = 0; // 用於記錄是否發生交換
        for (int j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1; // 標記有交換
            }
        }
        if (!swapped) { // 如果本輪未發生交換，排序完成
            break;
        }
    }
}

// TODO: 輸出
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}


int main() {
   int arr[] = {64, 34, 25, 12, 22, 11, 90}; // 測試陣列
   int size = sizeof(arr) / sizeof(arr[0]);
    printf("原始數列: ");
    printArray(arr, size);
    bubbleSort(arr, size);
    printf("排序後的數列: ");
    printArray(arr, size);
    return 0;
}