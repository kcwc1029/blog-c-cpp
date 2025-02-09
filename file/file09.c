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



int main(void){
    Student a[3] = {
        {"John Smith", 12345, "1234567", {3.0, 3.0, 3.0, 3.0}, 2000, 1, 1},
        {"Mary Smith", 67890, "7654321", {4.0, 4.0, 4.0, 4.0}, 2000, 2, 2},
        {"Smith Smith", 34567, "4321765", {2.0, 2.0, 2.0, 2.0}, 2000, 3, 3}
    };
    Student b;

    // TODO: 將結構寫入資料
    FILE *fp = fopen("file", "wb");
    fwrite(a, sizeof(Student), 3, fp); // 陣列 a 有 2 個 Student 結構元素
    fclose(fp);

    fp = fopen("file", "rb");
    // 從當前位置往回移動兩個 Student 結構的位置，讀取並印出
    fseek(fp, 1 * sizeof(Student), SEEK_SET);
    fread(&b, sizeof(Student), 1, fp);
    printStudent(&b);
    // 從當前位置往回移動兩個 Student 結構的位置，讀取並印出
    fseek(fp, -2 * sizeof(Student), SEEK_CUR);
    fread(&b, sizeof(Student), 1, fp);
    printStudent(&b);
    // 從檔案末尾往前移動一個 Student 結構的位置，讀取並印出
    fseek(fp, -1 * sizeof(Student), SEEK_END);
    fread(&b, sizeof(Student), 1, fp);
    printStudent(&b);
    fclose(fp);
    return 0;
}
// 輸出
// Mary Smith
// id = 67890
// grade = 4.000000 4.000000 4.000000 4.000000
// 2000 2 2
// John Smith
// id = 12345
// grade = 3.000000 3.000000 3.000000 3.000000
// 2000 1 1
// Smith Smith
// id = 34567
// grade = 2.000000 2.000000 2.000000 2.000000
// 2000 3 3
