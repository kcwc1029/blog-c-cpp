<p align="center">
    TA寫得很辛苦，幫TA按一下右上角的 ⭐ 支持一下QQ
</p>

-   [成大工科 程式設計](./成大工科%20程式設計.md)
-   [LeetCode 練習清單](./LeetCode清單.md)

## 章節

-   [建立編譯環境](./建立編譯環境.md)
-   [BUG：明明已經安裝好 gcc 或 gdb，可是 vscode 的 terminal 卻無法 work](./C_BUG.md)
-   [程式語言基本區分、第一支 C 程式](./第一支C程式.md)
-   [標頭檔](./Header_File.md)
-   [變數](./變數.md)
-   [輸入輸出](./輸入輸出.md)
-   [運算](./運算.md)
-   [判斷式](./判斷式.md)
-   [迴圈](./迴圈.md)
-   [Array](./Array.md)
-   [函數](./函數.md)
-   [static 與 extern](./static與extern.md)
-   [遞迴](./遞迴.md)
-   [指標](./指標.md)

## 4. 結構(structuure)

-   一名學生有以下資料：
    -   name：string
    -   student ID：string
    -   phone：string
    -   各學期平均成績：float[]
    -   birth：3 個 int

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

struct student {
    char name[10];
    char id[20];
    char phone[20];
    float grade[4]; // 16
    int birthYear, birthMonth, birthDay; // 12
};

int main(void){
    struct student john;
    printf("sizeof(john) = %ld\n", sizeof(john));
    return 0;
}
```

### 4.1. [結構初始化](./Structure/struct_init.c)

### 4.2. 結構指標

-   按照正常想法，如果要在結構指標取值，需要先使用星號取整個結構的值，在用結構的語法 => \*(ptr).id
-   可以直接寫成 ptr->id
-   [結構指標](./Structure/struct_pointer.c)

-   [使用結構處理負數](./Structure/complex01.c)
-   [結構傳遞](./Structure/complex02.c)

### 4.3. typedef

-   結構在初是化實，要寫兩個英文字母，typedef 可以把它節和在一起
-   [在結構中使用 typedef](./Structure/complex03.c)

### 4.4. 結構標題檔

-   [可以把結構用標題檔儲存](./Structure/complex04.c)

### 4.5. 在結構中使用結構

-   [在結構中使用結構](./Structure/student01.c)

## 17. 參考(reference) (CPP 才有)

-   reference 就是一種別名(alias)
-   一個變數可以有很多 reference
-   [reference 示範](./Reference/reference_size.cpp)
-   [reference 指定](./Reference/ref_init_assign.cpp)：reference 直接代表另一個變數，因此也可以直接作使用。

### 17.1. reference 傳遞

-   [使用參考跑 fof](./Reference/sum_ranged_for.cpp)
-   [使用指標傳遞參數](./Reference/swap_by_pointer.cpp)
-   [使用參考傳遞參數](./Reference/swap_by_reference.cpp)
-   [指標作為參數傳遞的過程](./Reference/pointer_parameter.cpp)
-   [指標參考作為參數傳遞的過程](./Reference/reference_parameter.cpp)
-   [參考作為 return](./Reference/reference_return.cpp)

---

<p align="center">
  Copyright © 2025 Wei-Cheng Chen
</p>
