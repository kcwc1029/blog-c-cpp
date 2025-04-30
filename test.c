#include <stdio.h>
#include <stdlib.h>

int main(){
    // int [2][3] 
    int m = 2, n = 3;

    int **arr = (int**)malloc(m * sizeof(int*));
    for(int i=0;i<2;i++){
        arr[i] = (int*)malloc(n * sizeof(int));
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j] = i+j;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            printf("%d\t", arr[i][j]);
        }
    }
    
    
    return 0;
}