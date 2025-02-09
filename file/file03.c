#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // 寫入file1
    FILE *fp1 = fopen("file1", "w");
    for (int i = 0; i < 10; i++){
        fputc('1', fp1);
    }
    fclose(fp1);

    // 讀寫file1
    fp1 = fopen("file1", "r+");
    for (int i = 0; i < 5; i++){
        fputc('2', fp1);
    }
    fclose(fp1);

    // 讀取file1
    fp1 = fopen("file1", "r");
    int c;
    while ((c = fgetc(fp1)) != EOF){
        fputc(c, stdout); // 寫到終端
    }
    fclose(fp1);
    return 0;
}
// 輸出
// 2222211111