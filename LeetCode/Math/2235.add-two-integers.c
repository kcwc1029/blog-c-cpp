// 2235.Add Two Integers by C
#include <stdio.h>
#include <stdlib.h>

int sum(int num1, int num2) {
    int ans = num1 + num2;
    return ans;
}

int main() {
    int num1, num2, ans;
    scanf("%d %d", &num1, &num2);
    // 使用函數
    ans = sum(num1, num2);
    printf("%d\n", ans);
    return 0;
}