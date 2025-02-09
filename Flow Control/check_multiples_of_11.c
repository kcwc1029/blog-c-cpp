// TODO: 判斷2728是否為11的倍數
// 輸入
// 2 7 2 8
// ^Z

// 輸出
// 1
#include <stdio.h>
#include <stdlib.h>

int main() {
    int digit;
    int count = 0;
    int evenSum = 0, oddSum = 0; // 紀錄奇數位跟偶數位
    while (scanf("%d", &digit) != EOF){
        if (count % 2 == 0){
            evenSum += digit;
        }else{
            oddSum += digit;
        }
        count++;
    }
    // 檢查正負
    int diff = evenSum - oddSum;
    if (diff < 0){
        diff = -diff;
    }
    printf("%d\n", diff % 11 == 0);
    return 0;
}