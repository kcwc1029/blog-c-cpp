// TODO: 輸入5個數值，最後輸出最小的數值

#include <stdio.h>
#include <stdlib.h>

int main(){
    int grades[5] = {135,4,7,8,3};
    // for(int i=0;i<5;i++){
    //     printf("enter grade no.%d\t", i);
    //     scanf("%d", &grades[i]);
    // }

    int low_grage = grades[0]; // 紀錄最小值 => 135
    
    for(int i=0;i<5;i++){ 
        if(grades[i]<low_grage)
            low_grage = grades[i]; // 135 -> 4
    }
    printf("low grade: %d", low_grage);
    return 0;
}