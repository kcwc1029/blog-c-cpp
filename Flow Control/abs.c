#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, k, max;
    scanf("%d%d%d", &i, &j, &k);
    if (i > 0){
        k = i;
    }else{
        k = -i;
    }
    printf("%d\n", k);
}