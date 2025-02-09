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
        "John",
        "12345",
        "1234567",
        {4.0, 3.9, 3.8, 3.6},
        2000, 1, 1
    };
    struct student *ptr = &john;
    strcpy(ptr->phone, "00000"); // 使用 strncpy 複製字符串，避免超出邊界
    printf("name is %s\n", ptr->name);
    printf("phone is %s\n", ptr->phone);
    return 0;
}

// 輸出
// name is John
// phone is 00000