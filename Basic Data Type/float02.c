#include <stdio.h>
#include <stdlib.h>
#define ARRAYSIZE 5
int main() {
    float f;  double df;
    scanf("%f", &f);
    scanf("%lf", &df);
    printf("%f\n", f);
    printf("%f\n", df);
    return 0;
}

// 輸入
// 3.14 3.15
// 輸出
// 3.140000
// 3.150000