// TODO: 費博那係數 0 1 1 2 3 5 8 ...
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int fib(int i){
    if(i==0 || i==1){
        return i;
    }else{
        return fib(i-1)+fib(i-2);
    }
}

int main(void){
    int n = 7;
    printf("fib(%d) = %d\n", n, fib(n));
    return 0;
}