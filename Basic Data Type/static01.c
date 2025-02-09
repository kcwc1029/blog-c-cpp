#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

void foo(void){
    int i = 0;
    i++;
    printf("foo: i = %d ", i);
}
void bar(void){
    static int i = 0;
    i++;
    printf("bar: i = %d ", i);
}


int main(void){
    for (int j = 0; j < 5; j++){
        foo();
    }
    printf("\n");
    for (int j = 0; j < 5; j++){
        bar();
    }
    return 0;
}

// 輸出
// foo: i = 1 foo: i = 1 foo: i = 1 foo: i = 1 foo: i = 1
// bar: i = 1 bar: i = 2 bar: i = 3 bar: i = 4 bar: i = 5