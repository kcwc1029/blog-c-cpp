#include <stdio.h>
#include <stdlib.h>

int main() {
    int m = 2, n = 3;
    int **arr;

    // 分配 m 個指向 int* 的指針（行）
    arr = (int**)malloc(m * sizeof(int*));
    // 為每行分配 n 個 int（列）
    for (int i = 0; i < m; i++) {
        arr[i] = (int*)malloc(n * sizeof(int));
    }

    // 初始化陣列
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = i * n + j + 1;
        }
    }

    // 輸出陣列
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // 釋放記憶體
    for (int i = 0; i < m; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}