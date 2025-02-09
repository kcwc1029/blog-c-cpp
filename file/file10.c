#include <stdio.h>

int main(){
    FILE *fp = fopen("file", "w");
    for (int i = 0; i < 3; i++){
        fputc('1', fp);
    }
    fclose(fp);

    fp = fopen("file", "r");
    int c = fgetc(fp);
    while (!feof(fp)){
        putchar(c); // 將 c 的內容輸出到螢幕上
        c = fgetc(fp);
    }
    fclose(fp);
    return 0;
}

// 輸出
// 111