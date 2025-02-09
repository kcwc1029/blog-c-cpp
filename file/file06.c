// TODO: 以文字跟二進制分別寫檔，然後在讀取，用16進制輸出
#include <stdio.h>

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
    // TODO: 以二進制寫檔
    FILE *fp = fopen("binary", "wb");
    fputs("hello\n", fp);  // 寫入字串
    fclose(fp);

    // TODO: 以文字寫檔
    fp = fopen("text", "w");
    fputs("hello\n", fp);
    fclose(fp);

    // TODO: 分別以三種模式讀取檔案
    dumpFile("binary", "rb");  // 以二進位模式讀取 "binary" 檔
    dumpFile("text", "rb");    // 以二進位模式讀取 "text" 檔
    dumpFile("text", "r");    // 以文字模式讀取 "text" 檔
    return 0;
}
// 輸出
// 68 65 6c 6c 6f 0a 
// there are 6 bytes
// file name: binary
// 68 65 6c 6c 6f 0d 0a
// there are 7 bytes
// file name: text
// 68 65 6c 6c 6f 0a
// there are 6 bytes
// file name: text