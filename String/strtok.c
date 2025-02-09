// TODO: 切割字串
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char pathname[] = "/user/local/bin/tt";
    char *start = pathname;
    char file[12][10];
    int fileCount = 0;
    // NOTE: strtok用法
    const char delimeters[] = "/"; 
    // const char delimeters = '/';  // 如果只有一個
    // const char delimeters[] = "/*!";  // 如果有多個切字元
    
    start = strtok(start, delimeters);
    while (start != NULL) {
        strcpy(file[fileCount], start);
        fileCount++;
        start = strtok(NULL, delimeters); // 從上次停下來的地方繼續找
    }
    for (int i = 0; i < fileCount; i++){
        printf("%s\n", file[i]);
    }
    return 0;
}

// 輸出
// user
// local
// bin
// tt