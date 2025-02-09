// TODO: 輸入5個數值，最後輸出最小的數值

#include <stdio.h>
#include <stdlib.h>

int main(){
    int grades[5];
    int low_grage;
    for(int i=0;i<5;i++){
        printf("enter grade no.%d\t", i);
        scanf("%d", &grades[i]);
    }

    low_grage = grades[0];
    for(int i=0;i<5;i++){
        if(grades[i]<low_grage)
            low_grage = grades[i];
    }
    printf("low grade: %d", low_grage);
    return 0;
}