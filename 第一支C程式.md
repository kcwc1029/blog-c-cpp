## 2. 程式語言基本區分

-   程式語言基本可以分為高階語言(high-level languages)與低階語言(low-level languages)

    -   高階語言
        -   貼近人類的表達方式，易學易懂
        -   缺點是無法有效控制低階的硬體，執行效率也相對較差。
    -   低階語言
        -   擁有良好的執行效率，並提供強大的硬體控制
        -   很難學習和理解。編寫、讀取、除錯和維護相對較具挑戰性。

-   C 語言從設計、到最後執行會依據下列步驟進行：

    1. Create a source file.
    2. Use an editor to write the original source code.
    3. Compile and link the program. At this stage, the system will generate an executable module.
    4. Execute the program.

-   Linker  負責在連結階段找到函式庫，並將正確的函式呼叫插入到目標程式中。

## 3. 第一支 C 程式

```c
#include <stdio.h>
#include <stdlib.h>

int main(){
    int no;
    no = 2;
    printf("Hello World!!\n");
    printf("there are %d pandas in Taipei", no);

    system("PAUSE");
    return 0;
}
```

```shell
# 編譯&執行方式
gcc test.c -o test // 將.C檔編譯成執行檔
.\test // 執行
```

## 5. bit/bytes

-   位元 (bit)
    -   是電腦中最小的數據單位。
    -   它可以表示 0 或 1 兩種狀態（像開或關，對應於電路中的電流有或沒有）。
-   位元組 (byte)
    -   一個 Byte 通常代表一個字符（如 ASCII 編碼中的英文字母 A 或 B）。
    -   是由 8 個位元 (bits) 組成的數據單位。
    -   每個位元都有兩種可能性（0 或 1），所以 8 個位元可以有 256 種組合。
-   字(Word)
    -   一個 Word 是計算機 CPU 處理數據的基本單位，長度依 CPU 架構而定。
    -   根據 CPU 不同
        -   16-bit CPU 👉 1 Word = 16-bit = 2 Byte
        -   32-bit CPU 👉 1 Word = 32-bit = 4 Byte
        -   64-bit CPU 👉 1 Word = 64-bit = 8 Byte

## 6. 記憶體分段

-   在程式的記憶體佈局中，分段是將不同類型的數據和程式碼分開存儲的一種方式。
-   提高效率：將程式碼和數據分開，方便管理和優化。
-   安全性：通過設置唯讀或可讀寫權限，防止數據被意外修改。
-   節省空間：未初始化的變數不佔用可執行文件的大小。

### 6.1. 記憶體分段佈局（從低地址到高地址）

#### 6.1.1. .text 段

-   存儲程式的機器指令（編譯後的程式碼）。
-   通常是唯讀的，防止程式碼被意外修改。
-   包含函數的實現（例如 main 函數）。

```c
int main() {
    return 0;
}
```

#### 6.1.2. .rodata 段

-   存儲唯讀數據，例如字串常量和全局 const 變數。
-   通常是唯讀的，防止數據被修改。
-   可以節省記憶體，因為相同的常量可能會被共享。

```c
const char *str = "Hello, World!";  // 字串常量存儲在 .rodata 段
```

#### 6.1.3. .data 段

-   存儲已初始化的全局變數和靜態變數。
-   變數的值在編譯時就已經確定。
-   通常是可讀寫的。

```c
int global_var = 42;  // 存儲在 .data 段
```

#### 6.1.4. .bss 段

-   存儲未初始化的全局變數和靜態變數。
-   .bss 段中的變數在程式啟動時會被初始化為零，這是因為標準規定未初始化的全局變數和靜態變數的值為零。
-   不佔用可執行文件的大小，因為只記錄變數的大小。

```c
int uninitialized_var;  // 存儲在 .bss 段
```

#### 6.1.5. Stack（堆疊）

-   用於存儲區域變數和函數調用信息（例如返回地址、參數等）。

```c
void func() {
    int local_var = 10;  // 存儲在堆疊上
}
```

#### 6.1.6. Heap（堆）

-   用於動態記憶體分配（例如 malloc、calloc、realloc）。
-   由程式設計師手動管理，需要釋放分配的記憶體（使用 free）。

```c
// TODO: 以下是一個簡單的 C 程式，展示不同分段的使用：
int *arr = (int *)malloc(10 * sizeof(int));  // 分配在堆上
free(arr);  // 釋放記憶體
```

```c
#include <stdio.h>
#include <stdlib.h>

// .data 段
int global_var = 42;

// .bss 段
int uninitialized_var;

// .rodata 段
const char *str = "Hello, World!";

int main() {
    // Stack 段
    int local_var = 10;

    // Heap 段
    int *arr = (int *)malloc(10 * sizeof(int));

    printf("%s\n", str);
    printf("global_var: %d\n", global_var);
    printf("local_var: %d\n", local_var);

    free(arr);  // 釋放堆上的記憶體
    return 0;
}
```
