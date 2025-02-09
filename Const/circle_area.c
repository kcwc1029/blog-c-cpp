#include <stdio.h>
#define PI_1 3.14159

int main() {
    const float PI_2 = 3.14159;  // 定義一個常數
    float radius = 5.0;
    float area1 = radius * radius * PI_1;
    float area2 = radius * radius * PI_2;
    printf("aera of circle %.2f\n", area1);
    printf("aera of circle %.2f\n", area2);
    return 0;
}