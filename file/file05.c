#include <stdio.h>
#define STRINGLEN 128
int main(void){
    // TODO: 開啟 file1，使用 "w" (寫入) 模式
    FILE *fp1 = fopen("file1", "w");
    for (int i = 0; i < 10; i++)
        fprintf(fp1, "%d\n", i);
    fclose(fp1);

    // TODO: 重新以 "r" (讀取) 模式開啟 file1，透過 fscanf 讀取檔案內容
    fp1 = fopen("file1", "r");
    int sum = 0, n;
    while ((fscanf(fp1, "%d", &n)) != EOF)
        sum += n;
    fclose(fp1);

    // TODO: 將剛剛得到的 sum 寫入另一個檔案 file2
    FILE *fp2 = fopen("file2", "w");
    fprintf(fp2, "%d\n", sum);
    fclose(fp2);

    // TODO: 再以 "r" (讀取) 模式開啟 file2，將其中的值讀出並印到螢幕上
    fp2 = fopen("file2", "r");
    int another_sum;
    fscanf(fp2, "%d", &another_sum);
    fprintf(stdout, "%d\n", another_sum); // 印出到螢幕(stdout)
    fclose(fp2);
    return 0;
}