#include <stdio.h>

int main() {

    int a = 10;
    int * ptr;
    ptr = &a;

    printf("ptr = %p\n", ptr);
    printf("*ptr = %d", *ptr);
    return 0;
}

// ptr = 0x7ffffcc14
// *ptr = 10