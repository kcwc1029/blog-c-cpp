#include <stdio.h> // 輸入輸出
#include <stdlib.h> // 標準庫（Standard Library）的頭文件

char square[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int choice = 0; // 每次玩家的輸入
int player = 0; // 玩家身分

// 函數聲明
int checkForWin(); // 判斷遊戲狀態的函數
void displayBoard(); // 顯示棋盤的函數
void markBoard(char mark); // 根據玩家選擇在棋盤上打標記的函數
void clearScreen();


int main(int argc, char **argv){
    int gameStatus = -1; // 遊戲狀態，-1 表示遊戲進行中，1 表示有玩家勝利，0 表示平局
    char mark = ' ';     // 玩家標記，X 或 O

    player = 1; // 初始化為玩家 1
    while (gameStatus == -1){
//        顯示棋盤
        displayBoard();

//        切換玩家
        player = (player % 2) ? 1 : 2;

//        提示玩家輸入選擇
        printf("玩家 %d，請輸入位置（1-9）：", player);
        scanf("%d", &choice);

        // 根據玩家選擇設置標記
        mark = (player == 1) ? 'X' : 'O';
        markBoard(mark); // 在棋盤上標記

        // 檢查遊戲狀態
        gameStatus = checkForWin();

        // 切換到下一位玩家
        player++;


    }
    // 判斷遊戲結束的結果
    if (gameStatus == 1) printf("==> 恭喜玩家 %d 獲勝！\n", --player);
    else printf("==> 遊戲平局！\n");

	return 0;
}

void clearScreen(){
#ifdef _WIN32
    system("cls"); // Windows 清屏命令
#else
    system("clear"); // Linux/Unix 清屏命令
#endif
}

void displayBoard(){
    clearScreen();// 清屏命令
    printf("\n\n\t井字棋遊戲\n\n");
    printf("玩家 1 (X)  -  玩家 2 (O)\n\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);
    printf("     |     |     \n\n");
}

void markBoard(char mark){
    // 根據玩家選擇的位置進行標記
    // 玩家選擇1，然後記錄位置也是1
    if (choice == 1 && square[1] == '1') square[1] = mark;
    else if (choice == 2 && square[2] == '2') square[2] = mark;
    else if (choice == 3 && square[3] == '3') square[3] = mark;
    else if (choice == 4 && square[4] == '4') square[4] = mark;
    else if (choice == 5 && square[5] == '5') square[5] = mark;
    else if (choice == 6 && square[6] == '6') square[6] = mark;
    else if (choice == 7 && square[7] == '7') square[7] = mark;
    else if (choice == 8 && square[8] == '8') square[8] = mark;
    else if (choice == 9 && square[9] == '9') square[9] = mark;
    else{
        printf("無效的輸入，請重新選擇。\n");
        player--; // 退回到上個玩家
        getchar(); // 等待用戶輸入以避免跳過
    }
}

int checkForWin(){
    int returnValue = 0;
    // 檢查勝利條件
    // 橫向勝利條件
    if (square[1] == square[2] && square[2] == square[3]) returnValue = 1;
    else if (square[4] == square[5] && square[5] == square[6]) returnValue = 1;
    else if (square[7] == square[8] && square[8] == square[9]) returnValue = 1;

    // 縱向勝利條件
    else if (square[1] == square[4] && square[4] == square[7]) returnValue = 1;
    else if (square[2] == square[5] && square[5] == square[8]) returnValue = 1;
    else if (square[3] == square[6] && square[6] == square[9]) returnValue = 1;

    // 對角線勝利條件
    else if (square[1] == square[5] && square[5] == square[9]) returnValue = 1;
    else if (square[3] == square[5] && square[5] == square[7]) returnValue = 1;

    // 平局條件：棋盤已滿且無勝利者
    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
             square[4] != '4' && square[5] != '5' && square[6] != '6' &&
             square[7] != '7' && square[8] != '8' && square[9] != '9')
        returnValue = 0;
    else returnValue = -1; // 遊戲繼續進行
    return returnValue;
}