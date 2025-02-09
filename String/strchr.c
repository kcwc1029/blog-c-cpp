// TODO: 將路徑中的每個子資料夾名稱抽出
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char pathname[] = "/usr/local/bin/tt"; // 路徑
    char *start = pathname;               // 起始指針
    char file[10][40];                    // 用於存放分割結果
    int fileCount = 0;                    // 分割結果的計數
    // 跳過開頭的 '/'
    if(*start=='/'){
        start++;
    }
    while(start!=NULL){
        // 查找/
        char *slash = strchr(start, '/');
        // 有找到
        if(slash != NULL){
            strncpy(file[fileCount], start, slash - start);
            file[fileCount][slash - start] = '\0'; // 添加結尾符
            fileCount++;
            start = slash + 1; // 移動到下一段
        }else{ // 沒找到
            // 如果沒有找到 '/', 複製剩下的內容
            strcpy(file[fileCount], start);
            fileCount++;
            break; // 沒有更多內容了，退出迴圈
        }
    }
    for (int i = 0; i < fileCount; i++){
        printf("%s\n", file[i]);
    }
    return 0;
}