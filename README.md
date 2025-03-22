<p align="center">
    TA寫得很辛苦，幫TA按一下右上角的 ⭐ 支持一下QQ
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

## 7. 變數

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

### 7.1. 整數型

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

### 7.2. 浮點數

-   float：4byte
-   double：8byte
-   [浮點數資料宣告](./Basic%20Data%20Type/float01.c)
-   [浮點數輸入輸出](./Basic%20Data%20Type/float02.c)

### 7.3. 字元 char

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

### 7.4. ASCII

-   ASCII（American Standard Code for Information Interchange）是早期設計的一種字符編碼方式，用來將字母、數字和符號對應到二進制數字。
-   [字元轉換 ASCII](./Basic%20Data%20Type/ascii.c)

### 7.5. 強型別&弱型別

#### 7.5.1. 強型別 (Strongly Typed)

-   不允許隱式類型轉換，類型檢查嚴格。
-   Python、java 屬於強行別

```python
a = "10"
b = 5
print(a + b)  # ❌ TypeError: can only concatenate str (not "int") to str

# 需要顯式轉換：
print(int(a) + b)  # ✅ 正確輸出 15
```

#### 7.5.2. 若型別 (Weakly Typed)

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

#### 7.5.3. C 語言是強型別還是弱型別

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

## 8. 運算

-   [交換兩個變數的值](./Operation/swao01.c)

<!-- -   [總金額轉硬幣](./Operation/calculate_change.c)   -->

## 9. 輸入輸出

### 9.1. printf

```c
// 基本語法
int printf(const char *format, ...);
// format 是一個字串，指定了輸出的格式
// ... 是要輸出的變數列表
```

### 9.2. scanf

```c
// 基本語法
int scanf(const char *format, ...);
```

-   輸入的格式必須和指定的格式化字串一致（如 %d 表示整數，%f 表示浮點數等）
-   格式化字串必須與輸入數據類型一致：例如，%d 對應整數，%f 對應浮點數，%c 對應字符，%s 對應字串等。

```c
int num;
printf("請輸入一個整數: ");
scanf("%d", &num);
printf("你輸入的整數是: %d\n", num);
```

-   格式化輸出到標準輸出（通常是屏幕）

### 9.3. fgets

```c
// 基本語法
char *fgets(char *str, int n, FILE *stream);

// str 是用於存儲讀取數據的字符數組
// n 是要讀取的最大字符數（包括結尾的 \0）
// stream 是輸入流，通常使用 stdin 來從標準輸入讀取
```

```c
char str[100];
printf("請輸入一行文字: ");
fgets(str, sizeof(str), stdin);
printf("你輸入的文字是: %s", str);
```

### 9.4. puts

```c
int puts(const char *str);
// str 是要輸出的字串s
```

```c
puts("Hello, World!");
```

-   比 printf 簡單，適合輸出純文本
-   輸出字串並自動換行

## 10. flow control

### 10.1. 判斷式

-   選擇結構(Selection Statements)
    -   if
    -   switch 多重選擇敘述：根據表達式的值執行多種操作之一。
-   迴圈結構(Iteration Statements)
    -   while 迴圈：當條件為真時重複執行。
    -   do…while 迴圈：至少執行一次，然後根據條件決定是否繼續。
    -   for 迴圈：根據條件設定重複次數。
-   [實作 abs](./Flow%20Control/abs.c)
-   [實作三者最大值](./Flow%20Control/maximum_of_three.c)
-   [閏年判斷](./Flow%20Control/leap_year.c)
-   [四則運算](./Flow%20Control/four_arithmetic_operation.c)

### 10.2. 迴圈

![image](https://cdn.discordapp.com/attachments/1286741860538122281/1332351648785240145/image.jpg?ex=6794f0aa&is=67939f2a&hm=e7fe7b2d31924bfa30811e0988710f4e35005915844b008f15b32a061fb88a19&)

-   [最大公因數](./Flow%20Control/gcd.c)
-   [質數判斷](./Flow%20Control/prime.c)
-   [模擬長除法](./Flow%20Control/long_division.c)
-   [檢查 11 的倍數](./Flow%20Control/check_multiples_of_11.c)

### 10.3. break

-   立即退出 while、for、do while 或 switch 語句，繼續執行後續程式碼。
-   跳出 switch 語句，避免執行後續的 case。

```cpp
for (int i = 1; i <= 10; i++) {
    if (i == 5) break; // 當 i 為 5 時跳出迴圈
    printf("%d ", i);
}
// 輸出：1 2 3 4
```

### 10.4. continue

-   跳過當前迴圈中的剩餘語句，進入下一次迭代。

```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) continue; // 當 i 為 3 時跳過
    printf("%d ", i);
}
// 輸出：1 2 4 5
```

## 11. array

-   占有一塊連續的記憶體空間。

### 11.1. initialization

```c
// 宣告空間
int score[5];

// 在宣告空間的時候，同時需要宣告值
int arr[3] = {5,7,10}; // array of int
float arr[3] = {5.1,7.1,10.1}; // array of float
char arr[3] = {'a', 'b', 'c'}; // array of charts

int arr[5] = {0}; //相當於{0,0,0,0,0}
int arr[5] = {1,2}; //相當於{1,2,0,0,0}
```

-   [array 建立與輸出](./Array/array_initialization01.c)
-   [寫入與讀取陣列](./Array/array_write_read.c)
-   [示範超出邊界](./Array/array_out_of_bound.c)
-   [查看 arr 的記憶體空間與長度](./Array/array_size.c)
-   [查看 arr 的記憶體空間與長度](./Array/print_memory_location.c)
-   assert：
    -   確保輸入 n 不會超過 FIBARRAYSIZE
    -   引入：`<assert.h>`
-   [費博納數列](./Array/array_fibonacci.c)

-   泡沫排序法

```
未排序
64, 34, 25, 12, 22, 11, 90

第一輪： 最大值 90 冒泡到最後一位
64, 34, 25, 12, 22, 11, 90

第二輪： 次大值 64 冒泡到倒數第二位
34, 25, 12, 22, 11, 64, 90

第三輪： 次次大值 34 冒泡到倒數第三位
25, 12, 22, 11, 34, 64, 90
...
```

-   核心：反覆比較相鄰的元素，並將較大的元素逐步「冒泡」到數列的末尾
-   會有雙重迴圈
    -   外部：回合數
    -   內部：
-   [bubble_sort01.c](./bubble%20sort/bubble_sort01.c)
-   [bubble_sort02.c](./bubble%20sort/bubble_sort02.c) => 優化：在最佳情況下，如果數列已經有序，我們可以提早停止排序。
-   [九宮格遊戲](./Nine%20Grid%20Game/nine_grid_game.c)

## 12. 函數

-   包含五個部分：函式庫、標頭檔(header file)、函數名稱、參數、回傳
-   函數可以分三個方面：
    -   Function Declaration 函數聲明
    -   Function Definition 功能定義
    -   Function Calls 函數調用

### 12.1. Function Declarations

![upgit_20250318_1742264531.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250318_1742264531.png)

-   In a function declaration, we must provide the function name, its return type, and the number and type of its parameters.
-   A function declaration tells the compiler that there is a function with the given name defined somewhere else in the program.

### 12.2. Function Definition

![upgit_20250318_1742264667.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250318_1742264667.png)

-   The function definition consists of actual statements which are executed when the function is called (i.e. when the program control comes to the function).

### 12.3. Function Call

![upgit_20250318_1742264725.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250318_1742264725.png)

-   A function call is a statement that instructs the compiler to execute the function. We use the function name and parameters in the function call.

> Q：What is the difference between function declaration and function definition?
>
> -   A function declaration includes details like the function name, return type, and parameters.
> -   A function definition includes the actual body of the function.

### 12.4. forward declaration?

-   Sometimes, we define a function after its call to improve readability. In such cases, we declare the function before its definition and call. Such a declaration is called a forward declaration.

```c
#include <stdio.h>

// Forward declaration（前向宣告）
void sayHello();

int main() {
    sayHello();  // 可以先呼叫函式，因為已經有宣告
    return 0;
}

// Function definition（函式定義）
void sayHello() {
    printf("Hello, World!\n");
}

```

### 12.5. 參數傳遞(Function Arguments)

-   分為
    -   形式參數(formal parameter) => parameter
    -   實際參數(actual parameter) => Argument

![upgit_20250318_1742266084.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250318_1742266084.png)

> Q：What is the difference between function arguments and parameters?
>
> -   Function parameters are the variables listed in the function declaration.
> -   Function arguments are the actual values passed to the function during the function call.

-   [主程式與函數內的地址不同](./Function/main_program_function_address.c)

#### 12.5.1. Call by Value

-   Call by value in C is where in the arguments we pass value and that value can be used in function for performing the operation.
-   Values passed in the function are stored in temporary memory so the changes performed in the function don’t affect the actual value of the variable passed.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int sum(int x, int y){
    int c;
    c = x + y;
    return c;
}

// Driver Code
int main(){
    int a = 3, b = 2;
    int c = sum(a, b);
    printf("Sum of %d and %d : %d", a, b, c);
    return 0;
}
```

#### 12.5.2. Call by Reference

-   Call by reference is the method in C where we call the function with the passing address as arguments.
-   We pass the address of the memory blocks which can be further stored in a pointer variable that can be used in the function.
-   Now, changes performed in the values inside the function can be directly reflected in the main memory.

```c
#include <stdio.h>

// Call by reference
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int x = 1, y = 5;
    printf("Before Swapping: x:%d , y:%d\n", x, y);
    swap(&x, &y);
    printf("After Swapping: x:%d , y:%d\n", x, y);
    return 0;
}
```

### 12.6. 陣列參數傳遞

-   Can we return multiple values from a C function?
    -   No, it is generally not possible to return multiple values from a function. However, we can return multiple values using pointers, heap memory, or structures.
-   陣列是以實際參數(actual parameter)的方式傳值
-   [陣列參數傳遞](./Array/array_parameter_passing.c)

### 12.7. 使用函數對陣列操作

-   因為陣列是實際參數，所以可以用函數的方式去對陣列操作
-   [使用函數對陣列操作](./Function/operate_array_by_function.c)

### 12.8. 其他練習

-   [陣列中找特定值](./Function/array_find_specific_value.c)
-   [判斷是否為質數](./Function/is_prime01.c)
-   [判斷是否為質數(優化)](./Function/is_prime02.c)
-   [列出兩整數之間的質數](./Function/prime_betweeen_two_intergers.c)
-   [檢查一個數字是否可以表示為兩個質數之和](./Function/check_sum_of_two_primes.c)

## 13. recusion

-   [遞迴費博那係數](./Recusion/fib.c)
-   [實作最大公因數](./Recusion/gcd.c)
-   [實作和內塔](./Recusion/hanoi.c)

## 14. Pointers

-   A pointer is a variable that stores the memory address of another variable
-   Instead of holding a direct value, it holds the address where the value is stored in memory.

-   Dereferencing operator(`*`) used to declare pointer variable and access the value stored in the address.
-   Address operator(`&`) used to returns the address of a variable or to access the address of a variable to a pointer.

```c
// example
#include <stdio.h>
#include <stdlib.h>


int main(){
    int m = 100;
    int *ptr = &m;

    printf("The Value of Variable m is: %d\n", m);
    printf("The Memory Address of Variable m is: %p\n", &m);
    printf("The Memory Address of Variable m is using ptr: %p\n", ptr);
    return 0;
}


// The Memory Address of Variable m is: 0x7ffffcc14
// The Memory Address of Variable m is using ptr: 0x7ffffcc14
```

```c
// example
#include <stdio.h>

int main() {

    int a = 10;
    int * ptr;
    ptr = &a;

    printf("ptr = %p\n", ptr);
    printf("*ptr = %d", *ptr);
    return 0;
}

// ptr = 0x7ffffcc14
// *ptr = 10
```

-   C 語言中的指標可以分為許多不同的類型，具體取決於它所指向的數據
-   [宣告指標變數](./Pointer/declare_pointer_variable.c)
-   [查看指標大小](./Pointer/pointer_size.c)

### 14.1. 宣告指標變數

-   無法變更指標所指向的 data type

```c
// TODO: 宣告方式
int *x;
int *x, *y;
int *y=NULL;
float *fptr;
double *dptr;
```

### 14.2. Integer Pointers

-   指向整數值的指標
-   [指標交換變數值](./Pointer/swap_value_by_pointer.c)

### 14.3. Function Pointers

-   [使用函數指標](./Pointer/funtion_pointer.c)
-   [將指標作為回傳值](./Pointer/using_pointer_as_return.c)

### 14.4. Array Pointer

-   指向陣列的指標是指向整個陣列而不是陣列的第一個元素的指標。它將整個陣列視為單個單元，而不是給定元素的集合。

```c
#include<stdio.h>

int main() {
    int arr[5] = { 1, 2, 3, 4, 5 };
    int *ptr = arr;

    printf("%p\n", ptr);
    return 0;
}
```

```c
#include <stdio.h>

int main() {
    int arr[5] = { 1, 2, 3, 4, 5 };
    int *ptr = arr;
    for (int i = 0; i < 5; i++){
        printf("%d ", ptr[i]);
    }
    return 0;
}
// 1 2 3 4 5
```

```
*(ptr + i)：取的陣列內容的值
    ptr 是指向陣列第一個元素的指標
    ptr + i 會移動到第 i 個元素的記憶體位置。
    *(ptr + i) 會解引用該位置，取得該元素的值。

ptr[i]：取的陣列內容的值
    是*(ptr + i) 的語法糖，
    編譯器會自動將 ptr[i] 轉換為 *(ptr + i)

ptr + i：取的陣列內容的地址
&ptr[i]：取的陣列內容的地址
```

-   [分別用陣列跟陣列指標傳遞，並印出值跟地址](./Pointer/array_pointer_func.c)
-   [指標常數與陣列](.//Pointer/pointer_constants_arrays.c)
-   [指標變數當陣列使用](./Pointer/using_pointer_variable_as_array.c)
-   [指標操作二微陣列](./Pointer/array2D_pointer.c)

### 14.5. Structure Pointer

-   [基本操作 Structure Pointer](./Pointer/basic_structure_pointer.c)

### 14.6. Double Pointers

![upgit_20250319_1742372900.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250319_1742372900.png)

-   we can define a pointer that stores the memory address of another pointer
-   nstead of pointing to a data value, they point to another pointer.
-   [雙重指標](./Pointer/double_pointer.c)

### 14.7. 指標運算

![upgit_20250319_1742372958.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250319_1742372958.png)

-   [指針上下移動](./Pointer/pointer_increment_decrement.c)
-   [將陣列+3](./Pointer/array_add3_by_pointer.c)

### 14.8. 基於 C 指標屋完成的作用

-   Pass Arguments by Pointers => pass by address
-   Accessing Array Elements
-   Return Multiple Values from Function
-   Dynamic Memory Allocation
-   Implementing Data Structures

### 14.9. 優點

-   Pointers are used for dynamic memory allocation and deallocation.
-   An Array or a structure can be accessed efficiently with pointers
-   Pointers are useful for accessing memory locations.
-   Pointers are used to form complex data structures such as linked lists, graphs, trees, etc.
-   Pointers reduce the length of the program and its execution time as well.

### 14.10. 缺點

-   Memory corruption can occur if an incorrect value is provided to pointers.
-   Pointers are a little bit complex to understand.
-   Pointers are majorly responsible for memory leaks in C.
-   Uninitialized pointers might cause a segmentation fault.

## 15. 參考(reference) (CPP 才有)

-   reference 就是一種別名(alias)
-   一個變數可以有很多 reference
-   [reference 示範](./Reference/reference_size.cpp)
-   [reference 指定](./Reference/ref_init_assign.cpp)：reference 直接代表另一個變數，因此也可以直接作使用。

### 15.1. reference 傳遞

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
