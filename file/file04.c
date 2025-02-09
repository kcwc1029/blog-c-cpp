#include <stdio.h>
#define STRINGLEN 128
int main(void){
    FILE *fp;
    char string[STRINGLEN];

    // TODO: 以寫入模式開啟檔案，使用 fputs 寫入一些文字
    fp = fopen("output.txt", "w");
    fputs("Hello, world!\n", fp);
    fputs("這是一段測試文字。\n", fp);
    fclose(fp);

    // TODO: 以讀取模式重新開啟同一檔案，逐行讀出並印出
    fp = fopen("output.txt", "r");
    while (fgets(string, STRINGLEN, fp) != NULL) {
        fputs(string, stdout);
    }
    fclose(fp);
    return 0;
}
// 輸出
// Hello, world!
// 這是一段測試文字