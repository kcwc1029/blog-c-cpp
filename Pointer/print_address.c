#include <stdio.h>
#include <stdlib.h>


int main(){
    int m = 100;
    int *ptr = &m;

    printf("The Value of Variable m is: %d\n", m);
    printf("The Memory Address of Variable m is: %p\n", &m);
    printf("The Memory Address of Variable m is using ptr: %p\n", ptr);
    return 0;
}


// The Memory Address of Variable m is: 0x7ffffcc14
// The Memory Address of Variable m is using ptr: 0x7ffffcc14