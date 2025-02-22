#include <stdio.h>
#include <stdlib.h>

int main(){
    float f1 = 123.45f; // 宣告單精度浮點數
    double d1 = 123456789.123456789123; // 宣告雙精度浮點數
    printf("f1=%f\n", f1); // f1=123.456337
    printf("d1=%f\n", d1); // d1=123456789.123457
    return 0;
}