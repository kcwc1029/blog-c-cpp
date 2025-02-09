#include <stdio.h>
#include <stdlib.h>

int main() {
    int a1=40, a2=50, a3=60;
    int *p1 = &a1;
    int *p2 = &a2;
    int *p3 = &a3;
    printf("%p\t %d\n", p1, *p1);
    printf("%p\t %d\n", p2, *p2);
    printf("%p\t %d\n", p3, *p3);
    return 0;
}