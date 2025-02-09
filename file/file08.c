#include <stdio.h>
#define NAMELEN 20
#define PHONENUM 10
#define GRADE 4

typedef struct student {
    char name[NAMELEN];
    int id;
    char phone[PHONENUM];
    float grade[GRADE];
    int year;
    int month;
    int day;
} Student;

// TODO: 傳入一個 Student 結構的指標，將其各欄位印出
void printStudent(Student *s){
    puts(s->name);
    printf("id = %d\n", s->id);
    printf("grade = %f %f %f %f\n", s->grade[0], s->grade[1], s->grade[2], s->grade[3]);
    printf("%d %d %d\n", s->year, s->month, s->day);    
}

// TODO: 以文字/二進制讀檔
void dumpFile(char *filename, char *mode){
    // TODO: 以指定模式開啟檔案
    FILE *fp = fopen(filename, mode);
    // TODO: 讀取檔案
    int c; // 用來存放讀取到的字元 (以 int 儲存有助於判斷 EOF)
    int count = 0; // 用來計算讀到多少 Bytes
    while ((c = fgetc(fp)) != EOF){
        printf("%02x ", c); // 16進位輸出，寬度2位數
        count++;
        // 讀滿 8 Bytes (字元) 後就換行一次
        if (count % 16 == 0){
            putchar('\n');
        }
    }
    fclose(fp);
    printf("\nthere are %d bytes\n", count);
    printf("file name: %s\n", filename);
}

int main(void){
    Student a[2] = {
        {"John Smith", 12345, "1234567", {3.0, 3.0, 3.0, 3.0}, 2000, 1, 1},
        {"Mary Smith", 67890, "7654321", {4.0, 4.0, 4.0, 4.0}, 2000, 1, 1}
    };
    Student b[2];


    FILE *fp = fopen("file", "wb");
    fwrite(a, sizeof(Student), 2, fp); // 陣列 a 有 2 個 Student 結構元素
    fclose(fp);

    fp = fopen("file", "rb");
    fread(b, sizeof(Student), 2, fp); // 陣列 b 有 2 個 Student 結構元素
    fclose(fp);

    for (int i = 0; i < 2; i++){
        printStudent(&(b[i]));
    }
    dumpFile("file", "rb");
    return 0;
}
// 輸出
// John Smith
// id = 12345
// grade = 3.000000 3.000000 3.000000 3.000000
// 2000 1 1
// Mary Smith
// id = 67890
// grade = 4.000000 4.000000 4.000000 4.000000
// 2000 1 1
// 4a 6f 68 6e 20 53 6d 69 74 68 00 00 00 00 00 00
// 00 00 00 00 39 30 00 00 31 32 33 34 35 36 37 00
// 00 00 00 00 00 00 40 40 00 00 40 40 00 00 40 40
// 00 00 40 40 d0 07 00 00 01 00 00 00 01 00 00 00
// 4d 61 72 79 20 53 6d 69 74 68 00 00 00 00 00 00
// 00 00 00 00 32 09 01 00 37 36 35 34 33 32 31 00
// 00 00 00 00 00 00 80 40 00 00 80 40 00 00 80 40
// 00 00 80 40 d0 07 00 00 01 00 00 00 01 00 00 00

// there are 128 bytes
// file name: file