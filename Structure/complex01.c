#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

struct complex {
    int real;
    int imag;
};

// 加法
struct complex addComplex(struct complex a, struct complex b){
    struct complex c;
    c.real = a.real + b.real;
    c.imag = a.imag + b.imag;
    return c;
}

// 輸出
void printComplex(struct complex a){
    printf("%d+%di\n", a.real, a.imag);
    return;
}

int main(void){
    struct complex a = {1,3};;
    struct complex b = {5,2};
    struct complex c;
    c = addComplex(a, b);
    printComplex(c);
    return 0;
}
// 輸出
// 6+5i