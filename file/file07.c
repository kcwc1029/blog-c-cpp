#include <stdio.h>
#define ARRAYSIZE 10

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
        if (count % 8 == 0){
            putchar('\n');
        }
    }

    fclose(fp);
    printf("\nthere are %d bytes\n", count);
    printf("file name: %s\n", filename);
}

int main(void){
    int a[ARRAYSIZE] = {0,1,2,3,4,5,6,7,8,9};
    int b[ARRAYSIZE];

    // TODO: 以 "wb" 模式開啟檔案 "file" (二進位寫入)
    FILE *fp = fopen("file", "wb");
    fwrite(a, sizeof(int), ARRAYSIZE, fp);
    fclose(fp);

    // TODO: 以 "rb" 模式開啟同一檔案 "file" (二進位讀取)
    fp = fopen("file", "rb");
    fread(b, sizeof(int), ARRAYSIZE, fp);
    fclose(fp);
    for (int i = 0; i < ARRAYSIZE; i++){
        printf("%d\n", b[i]);
    }
    dumpFile("file", "rb");
    return 0;
}
// 輸出
// 0
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 00 00 00 00 01 00 00 00
// 02 00 00 00 03 00 00 00
// 04 00 00 00 05 00 00 00
// 06 00 00 00 07 00 00 00
// 08 00 00 00 09 00 00 00