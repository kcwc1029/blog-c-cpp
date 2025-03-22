#include <stdio.h>


int main() {
    int arr[2][3] = {{1, 2, 3},
                    {4, 5, 6}};

    // 手動去操作指針偏移
    int *ptr = &arr[0][0];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
                printf("%d ", *(ptr + i * 3 + j));  // 手動計算偏移量
        }
        printf("\n");
    }

    
    int (*ptr00)[3] = arr;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
                printf("%d ", ptr00[i][j]);  // 手動計算偏移量
        }
        printf("\n");
    }

    return 0;
}

