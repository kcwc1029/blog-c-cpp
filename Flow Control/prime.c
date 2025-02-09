#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // 使用 bool 類型

// 判斷質數的函數
bool isPrime(int n) {
    if (n <= 1) {
        return false; // 1 和以下的數字不是質數
    }
    if (n == 2) {
        return true; // 2 是質數
    }
    if (n % 2 == 0) {
        return false; // 偶數（除了 2）不是質數
    }

    // 檢查從 3 到 sqrt(n) 的奇數
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return false; // 如果有因數，則不是質數
        }
    }
    return true; // 否則，是質數
}

int main() {
    int num;
    printf("請輸入一個整數：");
    scanf("%d", &num);

    if (isPrime(num)) {
        printf("%d 是質數。\n", num);
    } else {
        printf("%d 不是質數。\n", num);
    }
    return 0;
}