#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

struct student {
    char name[10];
    char id[20];
    char phone[20];
    float grade[4]; // 16
    int birthYear, birthMonth, birthDay; // 12
};

int main(void){
    struct student john = {
        "John Smith",
        "12345",
        "1234567",
        {4.0, 3.9, 3.8, 3.6},
        2000, 1, 1
    };
    printf("name is %s\n", john.name);
    printf("id is %d\n", john.id);
    printf("phone is %s\n", john.phone);
    printf("john.grade[0] is %f\n", john.grade[0]);
    return 0;
}