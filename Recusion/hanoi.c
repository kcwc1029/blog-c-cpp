// TODO: 
// 和內塔3種模式 A B C
// 假設有n個盤子，
// 將n-1個盤子，利用C當buffer，將A搬到B
// 將1個盤子由A搬到C
// 將n-1個盤子，利用A當buffer，將B搬到C

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void hanoi(int n, char src, char buffer, char dst){
    if(n==1){
        printf("from %c to %c\n", src, dst);
    }else{
        hanoi(n-1, src, dst, buffer);
        printf("from %c to %c\n", src, dst);
        hanoi(n-1, buffer, src, dst);
    }
}

int main(){
    int n=4;
    hanoi(n, 'A', 'B', 'C');
    return 0;
}