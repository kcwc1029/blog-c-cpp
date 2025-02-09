#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

typedef struct date {
    int year;
    int month;
    int day;
} Date;

typedef struct student {
    char name[10];
    char id[20];
    char phone[20];
    float grade[4]; // 16
    int SchooldayYear , SchooldayMonth, SchooldayDay; // 12
    Date birthDay; 
} Student;

int main(void){
    // NOTE:
    Student a = {
        "John",
        "12345",
        "1234567",
        {4.0, 3.9, 3.8, 3.6},
        2000, 1, 1,
        {2001, 10, 29}
    };
    printf("name is %s\n", a.name);
    printf("grade is %f\n", a.grade[0]);
    printf("birthDay day is %d\n", a.birthDay.day);
    return 0;
}
// 輸出
// name is John
// grade is 4.000000
// birthDay day is 29