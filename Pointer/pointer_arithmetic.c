#include <stdio.h>
#include <stdlib.h>

int main() {
    int no;
    int *int_ptr = &no;

    printf("int_ptr = %p\n", int_ptr);
    int_ptr++;
    printf("int_ptr = %p\n", int_ptr);
    int_ptr--;
    printf("int_ptr = %p\n", int_ptr);
    int_ptr += 2;
    printf("int_ptr = %p\n", int_ptr);
    int_ptr -= 2;
    printf("int_ptr = %p\n", int_ptr);
    return 0;
}