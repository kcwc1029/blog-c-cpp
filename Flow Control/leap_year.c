#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // bool

int main(){
    int year;
    printf("請輸入年分");
    scanf("%d", &year);
    bool leapYear;
    if (year % 400 == 0){
        leapYear = true;
    }else if ((year % 4 == 0) && (year % 100 != 0)){
        leapYear = true;
    }else{
        leapYear = false;
    }
    printf("%d\n", leapYear);
}