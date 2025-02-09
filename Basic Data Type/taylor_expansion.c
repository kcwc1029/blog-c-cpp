// NOTE: 可以嘗試將 xpower 的資料型態更改看看(double、float)
#include <stdio.h>
#include <stdlib.h>

int main() {
    float x;
    scanf("%f", &x);
    float e = 1.0;
    int n = 10;
    int factorial = 1; // 分母部分
    float xpower = 1.0; // 分子
    for (int i = 1; i <= n; i++){
        factorial *= i;
        xpower *= x;
        e += xpower / factorial; // float除int 資料型別轉換
    }
    printf("%f\n", e);
    return 0;
}

// 輸入
// 1.5
// 輸出
// 4.48186