// TODO: 輸入金額，計算 50、10、5、1 硬幣數量
#include <stdio.h>
#include <stdlib.h>

int main(){
    int change;
    scanf("%d", &change);
    int fifty = change / 50;
    change = change - fifty * 50;
    int ten = change / 10;
    change = change - ten * 10;
    int five = change / 5;
    change = change - five * 5;
    int one = change;

    printf("%d\n", fifty);
    printf("%d\n", ten);
    printf("%d\n", five);
    printf("%d\n", one);
}