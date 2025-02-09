// TODO: 
// 在file1寫10個1
// 在file2寫20個2
// 讀取file1並覆蓋file2
// 讀取file2輸出
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

    // 寫入file2
    FILE *fp2 = fopen("file2", "w");
    for (int i = 0; i < 20; i++){
        fputc('2', fp2);
    }
    fclose(fp2);

    // 讀取file1寫到file2
    fp1 = fopen("file1", "r");
    fp2 = fopen("file2", "w");
    int c;
    while ((c = fgetc(fp1)) != EOF){
        fputc(c, fp2);
    }
    fclose(fp1);
    fclose(fp2);

    //  讀取file2
    fp2 = fopen("file2", "r");
    while ((c = fgetc(fp2)) != EOF){
        fputc(c, stdout); // 寫到終端
    }
    fclose(fp2);
    return 0;
}
// 輸出
// 1111111111