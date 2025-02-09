// TODO: 模擬126/3
// 輸入
// 3
// 1 2 6

// 輸出
// 4
// 2
#include <stdio.h>
#include <stdlib.h>

int main() {
    int k;
    scanf("%d", &k); // 讀取除數 k
    int count = 0, prev = 0; // count 用於計數輸入的數字，prev 保存上一步的餘數
    int toPrint; // 用於保存部分商
    int digit; // 用於保存當前輸入的數字
    while (scanf("%d", &digit) != EOF) { // 逐個讀取數字，直到輸入結束
        int value = 10 * prev + digit; // 將上一步的餘數與當前數字結合，形成新的被除數
        toPrint = value / k; // 計算部分商
        if (!(count == 0 && toPrint == 0)){ // 如果不是前導零，則輸出
            printf("%d\n", toPrint);
        }
        prev = value % k; // 更新餘數
        count++; // 計數輸入的數字
    }

    // 處理特殊情況：只有一個數字且結果為 0
    if (count == 1 && toPrint == 0){
        printf("0\n");
    }
    return 0;
}