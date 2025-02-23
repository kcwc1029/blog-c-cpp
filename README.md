<p align="center">
    如果你覺得這個專案對你有幫助，請點擊右上角的 ⭐ 支持這個專案！
</p>

-   [成大工科 程式設計](./成大工科%20程式設計.md)
-   [LeetCode 練習清單](./LeetCode清單.md)

## 1. 建立編譯環境

-   【win】使用 dev C++ 進行環境安裝：https://reurl.cc/p90XX4
-   【win】使用 Cygwin + vscode 進行環境安裝：https://youtu.be/G7VixiGdeho
    -   gcc、g++、gdb、make、binutils
-   【win】使用 code::block 進行環境安裝：https://docs.google.com/presentation/d/1ckPZCDKSBjL5-Rtn8MuUXec6NBYZoSlA/edit#slide=id.p1
-   【mac】助教沒用過，你自己加油：
    -   https://reurl.cc/G5yDyx
    -   https://docs.google.com/presentation/d/1ckPZCDKSBjL5-Rtn8MuUXec6NBYZoSlA/edit#slide=id.p16

### 1.1. BUG：明明已經安裝好 gcc 或 gdb，可是 vscode 的 terminal 卻無法 work

-   手動設置 VS Code 的環境變數
-   點擊右下角齒輪圖標，選擇 Settings。
-   點擊右上角的 Open Settings (JSON)，打開 `settings.json` 配置文件。
-   添加以下設置(要確認好你安裝 MinGW 的路徑)

```json
"terminal.integrated.env.windows": {
	"PATH": "C:\\MinGW\\bin;${env:PATH}"
}
```

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

## 4. 標頭檔

```c
#include <內建標題檔.h>
#include "自訂標題檔.h"
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

## 6. 變數

-   變數命名規則：https://reurl.cc/A2zqNQ
-   變數的宣告告訴電腦要為變數分配多少記憶體空間。
-   變數是強型別(strongly typed)語言的一部分，這意味著在宣告變數時，必須明確指定其資料型態。

```c
#include <stdio.h>
#include <stdlib.h>

int main(){
    // 宣告
    int num1, num2;

    // 初始化
    int num1 = 30;  // 初始化 num1
    int num2 = 77;  // 初始化 num2
    return 0;
}
```

-   可以用 sizeof()查詢資料長度。

### 6.1. 整數型

-   int：4byte

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    // 修飾詞
    int a = 58;
    short int b = 58;
    long int c = 58;

    // 印出變數值
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    // 印出每個型別的實際大小
    printf("sizeof(int) = %lu bytes\n", sizeof(a)); // sizeof(int) = 4 bytes
    printf("sizeof(short int) = %lu bytes\n", sizeof(b)); // sizeof(short int) = 2 bytes
    printf("sizeof(long int) = %lu bytes\n", sizeof(c)); // sizeof(long int) = 8 bytes
    return 0;
}

```

### 6.2. 浮點數

-   float：4byte
-   double：8byte
-   [浮點數資料宣告](./Basic%20Data%20Type/float01.c)
-   [浮點數輸入輸出](./Basic%20Data%20Type/float02.c)

### 6.3. 字元 char

```c
char c = 'r';
char str[] = "Hello, World!";

// `\n`：換行
// `\t`：水平製表符
// `\\`：反斜線字符
```

-   字元型用於存儲單個字符，使用 ASCII 編碼來表示字符的數值
-   佔用 1 個 byte。
-   範圍：-128 到 127 或 0 到 255（取決於是否使用 signed 或 unsigned）。
-   跳脫字符：在 C 語言中，字串其實是一個字符陣列，以空字元 '\0' 作為結束標誌
-   [字元計算大小](./Basic%20Data%20Type/char01.c)

![upgit_20250222_1740213553.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/02/upgit_20250222_1740213553.png)

### 6.4. ASCII

-   ASCII（American Standard Code for Information Interchange）是早期設計的一種字符編碼方式，用來將字母、數字和符號對應到二進制數字。
-   [字元轉換 ASCII](./Basic%20Data%20Type/ascii.c)

### 6.5. 強型別&弱型別

#### 6.5.1. 強型別 (Strongly Typed)

-   不允許隱式類型轉換，類型檢查嚴格。
-   Python、java 屬於強行別

```python
a = "10"
b = 5
print(a + b)  # ❌ TypeError: can only concatenate str (not "int") to str

# 需要顯式轉換：
print(int(a) + b)  # ✅ 正確輸出 15
```

#### 6.5.2. 若型別 (Weakly Typed)

-   變數的型別可以根據上下文自動轉換（自動類型提升）。
-   允許隱式轉換（例如：字串變數可以與數字變數相加）。
-   更靈活，但容易產生隱式錯誤。
-   JavaScript 屬於弱型別

```js
let a = "10";
let b = 5;

console.log(a + b); // ✅ "105" (JavaScript 自動把 5 轉成字符串)
console.log(a - b); // ✅ 5 (JavaScript 自動把 "10" 轉成數字)
console.log(a * b); // ✅ 50 (JavaScript 自動把 "10" 轉成數字)
```

#### 6.5.3. C 語言是強型別還是弱型別

-   C 語言是一種「靜態型別 (Statically Typed)」且「強型別 (Strongly Typed)」的語言，但允許某些隱式轉換 (Implicit Conversion)。
-   不允許直接改變變數類型

```cpp
int a = 10;
char b = 'A';

a = b;  // ✅ 允許，因為 'A' 會被轉換為 ASCII 值 65
b = a;  // ⚠️ 可能導致數據丟失，因為 int 轉 char 會丟失高位數據
```

-   允許數值型別的隱式轉換：int => float => double

```cpp
#include <stdio.h>

int main() {
    int a = 5;
    double b = a;  // ✅ 隱式轉換 (int → double)
    printf("%lf\n", b);  // 輸出 5.000000
    return 0;
}
```

-   強制型別轉換 (Explicit Casting)：如果需要將某個資料強制轉換為另一種型態，可以使用強制轉換運算符

```cpp
// NOTE: C 在大部分情況下需要顯式轉換（強型別特性）
#include <stdio.h>

int main() {
    double x = 3.14;
    int y = (int) x;  // ✅ 顯式轉換 double → int

    printf("%d\n", y);  // 輸出 3
    return 0;
}
```

## 7. 運算

-   [交換兩個變數的值](./Operation/swao01.c)

<!-- -   [總金額轉硬幣](./Operation/calculate_change.c)   -->

---

<p align="center">
  Copyright © 2025 Wei-Cheng Chen
</p>
