#include <stdio.h>
#include <stdlib.h>

typedef struct date{
    int year;
    int month;
    int day;
} Date;

int compare(const void *data1,const void *data2){
    Date *ptr1 = (Date *)data1;
    Date *ptr2 = (Date *)data2;
    // 開始比較
    if (ptr1->year < ptr2->year){
        return -1;
    }else if (ptr1->year > ptr2->year){
        return 1;
    }else if (ptr1->month < ptr2->month){
        return -1;
    }else if (ptr1->month > ptr2->month){
        return 1;
    }else if (ptr1->day < ptr2->day){
        return -1;
    }else if (ptr1->day > ptr2->day){
        return 1;
    }else{
        return 0;
    }
}

#define ARRAYSIZE 3
int main(void){
    Date array[ARRAYSIZE] = {
        {1999,1,1},
        {1950,6,6},
        {1950,7,5},
    };
    qsort(array, ARRAYSIZE, sizeof(Date),compare);
    for (int i = 0; i < ARRAYSIZE; i++){
        printf("%d %d %d\n", array[i].year, array[i].month, array[i].day);
    }
    return 0;
}