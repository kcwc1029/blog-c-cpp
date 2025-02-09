// TODO: 將路徑中的每個子資料夾名稱抽出
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

struct complex {
    int real;
    int imag;
};
typedef struct complex Complex; // NOTE:

// 加法
void addComplex(const struct complex *a, const struct complex *b, struct complex *c){
    c->real = a->real + b->real;
    c->imag = a->imag + b->imag;
    return;
}

// 輸出
void printComplex(const struct complex *a){
    printf("%d+%di\n", a->real, a->imag);
    return;
}

int main(void){
    // NOTE:
    Complex a = {1,3};
    Complex b = {5,2};
    Complex c;
    addComplex(&a, &b, &c);
    printComplex(&c);
    return 0;
}
// 輸出
// 6+5i