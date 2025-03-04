// TODO: 印出記憶體位置：要使用%p

#include <stdio.h>
#include <stdlib.h>
#define ARRAYSIZE 5

int main(){
    int a[ARRAYSIZE] ={1,2,3,4,5};
    printf("%ld\n", a[0]); // 輸出第0個值 => 1
    printf("%ld\n", sizeof(a[0])); // array 第0個位置的長度 => 4 byte
    printf("%ld\n", sizeof(a)); // array 總byte數 => 4 byte *5 = 20bytes
    // NOTE: 需要知道array長度 => sizeof(a)/sizeof(a[0])
    for (int i = 0; i < ARRAYSIZE; i++){
        printf("%p\n", &(a[i]));
    }
    return 0;
}




// 輸出
// 4
// 20
// 0061FF08
// 0061FF0C
// 0061FF10
// 0061FF14
// 0061FF18