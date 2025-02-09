#include <stdio.h>
#include <stdlib.h>

int main() {
    int i;
    int j;
    double d;
    scanf("%d%d%lf", &i, &j, &d);
    printf("%d\n", i / j); // int除int
    printf("%f\n", i / d); // int除double
    return 0;
}

// 輸入
// 100 4 4.0
// 輸出
// 25
// 25.000000