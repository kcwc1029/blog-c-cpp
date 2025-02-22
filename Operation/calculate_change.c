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
    printf("50-dollar coins: %d piece(s)\n", fifty);
    printf("10-dollar coins: %d piece(s)\n", ten);
    printf("5-dollar coins: %d piece(s)\n", five);
    printf("1-dollar coins: %d piece(s)\n", one);
}