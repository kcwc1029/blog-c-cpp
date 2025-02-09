#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gcd(int i, int j){
    printf("gcd(%d, %d) = ", i, j);
    int k = i%j;
    if(k==0){
        return j;
    }else{
        return gcd(j, k);
    }
}

int main(){
    int i=82, j=24;
    printf("%d\n", gcd(i, j));
    return 0;
}