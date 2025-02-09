#include <stdio.h>
#include <stdlib.h>

// TODO: bobble sort
void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) { // 外層迴圈控制回合數
        for (int j = 0; j < size - 1 - i; j++) { // 內層迴圈比較相鄰元素
            if (arr[j] > arr[j + 1]) { // 如果前一個比後一個大，交換
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
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