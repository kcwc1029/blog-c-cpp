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

### 12.8. Inline Function

-   很常跟 Macro 比較
-   inline 函數是希望編譯器在編譯時，把函數的程式碼直接插進呼叫的地方，而不是像平常那樣進行「函數呼叫與跳轉」
-   這樣可以減少「呼叫開銷」，讓程式更快一點，尤其是小函數、多次呼叫的情況下。
-   語法

```c
inline 返回型別 函數名稱(參數) {
    // 函數內容
}
```

-   範例

```c
#include <stdio.h>

inline int square(int x) {
    return x * x;
}

int main() {
    int n = 5;
    int result = square(n);  // 會被替換成 n * n
    printf("%d\n", result);
    return 0;
}

```

-   內聯函數的行為：只是對編譯器的建議，它不會強制編譯器。inline 的行為取決於它的使用方式以及編譯器如何實現內聯優化。
    -   有些編譯器（像 GCC）需要開啟優化才能啟用 inline：`gcc program.c -o program -O1`
    -   如果你使用 inline 而沒開優化，GCC 可能會出現「undefined reference」的錯誤（找不到函數定義）。
    -   或是可以使用 Static Inline Function(在 inline 函數之前使用 static 關鍵字)，強制編譯器使用內部連結處理函數

```c
#include <stdio.h>

// Inline function in C
static inline int foo() {
    return 2;
}

int main() {
    int res;

    // inline function call
    res = foo();
    printf("%d", res);
    return 0;
}

```

### 12.9. Nested functions in C(嵌套函數)

-   C 語言不支援真正的「嵌套函數定義」
-   不能在一個函數裡面「定義」另一個函數（像 Python 那樣），會得到類似 undefined reference to 'inner' 的錯誤。
-   解法 01：把函數寫在主函數外面(廢話 ww)

```c
#include <stdio.h>

void inner() {
    printf("Inner!\n");
}

int main() {
    inner();  // 可以正常使用
    return 0;
}
```

-   解法 02：使用 GNU 擴展（GCC）
-   GCC 有一個非標準的擴充語法允許在一個函數裡面定義函數，但只能在 GCC 編譯器上用，跨平台不保證通用性。
-   GCC 擴展下的嵌套函數的聲明需要以 auto 關鍵字為前綴/開頭。

```c
#include <stdio.h>

int main() {
    auto int inner() {
        printf("This is inner function\n");
        return 0;
    }

    inner();
    return 0;
}

```

### 12.10. Variadic Functions in C

-   可變參數函數是： 👉 能夠接受不同數量參數的函數
-   平常我們定義函數時，參數數量是固定的，像是`int add(int a, int b); `
-   但有些情況下，我們不確定要幾個參數（像 printf），這時就會用到「可變參數函數」
-   使用標題檔：`<stdarg.h>`
-   語法

```c
return_type function_name(fixed_arg, ...);

void print(int n, ...);
```

#### 12.10.1. 範例：不固定參數加種

-   假如，現在要做一個參數，他是拿來做 ru 輸出的，但我希望參數數量可以不固定的函數

```c
// 平常寫法
int add(int a, int b);  // 只能加兩個數

// 理想
add(1, 2, 3);       // 加三個
add(10, 20);        // 加兩個
add(5, 6, 7, 8, 9); // 加五個
```

```c
#include <stdarg.h>
#include <stdio.h>

int add(int count, ...) {
    // 1. 準備一個變數來存參數清單
    va_list args;

    // 2. 告訴它從哪裡開始找變數參數（從 count 之後）
    va_start(args, count);

    int sum = 0;

    // 3. 重複取出參數來加總
    for (int i = 0; i < count; i++) {
        sum += va_arg(args, int); // 每次取出一個 int
    }

    // 4. 結束使用，收尾
    va_end(args);
    return sum;
}

int main(){
    int result = add(3, 10, 20, 30);  // 會回傳 60
    return 0;
}
```

#### 12.10.2. 範例：作出 print(不固定參數)

```c
#include <stdio.h>
#include <stdarg.h>

// Variadic function to print given arguments
void print(int n, ...) {
    va_list args;
    va_start(args, n);
    for (int i = 0; i < n; i++)
        printf("%d ", va_arg(args, int));
    printf("\n");
    va_end(args);
}


int main() {

    // Calling function sum() with different number
    // of arguments
    print(3, 1, 2, 3);
    print(5, 1, 2, 3, 4, 5);
    return 0;
}

```

#### 12.10.3. <stdarg.h> 中的 四個關鍵變數(巨集)

-   va_list
    -   是一種特殊型別
    -   用來儲存「可變參數清單的資訊」
-   va_start(list, fixed_arg)
    -   把 args 初始化，讓它知道「從哪個參數之後開始是可變參數」

```c
va_start(args, n);  // n 是最後一個固定參數

// n 是那個 print(n, ...) 裡的 n
```

-   va_arg(list, type)
    -   這是最核心的部分：每次呼叫 va_arg 就會拿到一個參數，並移動到下一個。
    -   你必須知道參數的型別，不然會導致未定義行為(undefined)

```c
int val = va_arg(args, int);  // 從 args 取一個 int 出來
```

-   va_end(list)
    -   This ensures that resources associated with va_list are properly released.

```c
va_end(args);
```

#### 12.10.4. 範例：作出 print(混合型別參數)

```c
#include <stdio.h>
#include <stdarg.h>

void print(int n, ...) {
    va_list args;
    va_start(args, n);

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0)
            printf("Integer: %d\n", va_arg(args, int));
        else
            printf("Float: %.2f\n", va_arg(args, double));
    }

    va_end(args);
}

int main(){
    print(4, 10, 3.14, 20, 2.71);
    return 0;
}
```

### 12.11. 其他練習

-   [陣列中找特定值](./Function/array_find_specific_value.c)
-   [判斷是否為質數](./Function/is_prime01.c)
-   [判斷是否為質數(優化)](./Function/is_prime02.c)
-   [列出兩整數之間的質數](./Function/prime_betweeen_two_intergers.c)
-   [檢查一個數字是否可以表示為兩個質數之和](./Function/check_sum_of_two_primes.c)

### 12.12. 函數相關考題

-   來源：https://www.geeksforgeeks.org/quizzes/functions-gq/

#### 12.12.1. Question

Output of following program?

```c
#include <stdio.h>
int main()
{
    int i = 5;
    printf("%d %d %d", i++, i++, i++);
    return 0;
}
```

A：Compiler Dependent
C 語言的 函數參數求值順序（Function Argument Evaluation Order）在標準中沒有規定固定順序，也就是說：

-   有些編譯器可能會從左到右處理參數
-   有些可能會從右到左
-   有些甚至會根據內部優化策略調整順序

#### 12.12.2. Question

What is the output of this program?

```c
#include <stdio.h>
int main()
{
  printf("%d", main);
  return 0;
}
```

A：Address of main function

#### 12.12.3. Question

Q：In C, what is the meaning of following function prototype with empty parameter list

```c
void fun(){
   /* .... */
}

void fun（）{ /* .... */}
```

A：Function can be called with any number of parameters of any types

## 13. static

-   static 控制 變數或函式的生命週期 和 可見範圍（作用域）。

### 13.1. 用途 01：記住變數值

```c
#include <stdio.h>

void counter() {
    static int count = 0;
    count++;
    printf("%d\n", count);
}

int main(){
    counter(); // 第一次呼叫：count = 1
    counter(); // 第二次呼叫：count = 2
    return 0;
}
```

### 13.2. 用途 02：限制作用範圍（封裝）

-   在檔案外定義的變數前加 static
-   讓函式只在該 .c 文件可見。
-   範例：static 變數只在該 .c 檔內可見（封裝模組）
    -   用 sensor.c、main.c 去模擬

```c
// sensor.c

#include <stdio.h>

static int sensorValue = 0; // 這個變數只在 sensor.c 可見

void readSensor() {
    sensorValue++;
    printf("Sensor value: %d\n", sensorValue);
}
```

```c
// main.c
#include <stdio.h>

// extern int sensorValue; // 嘗試用 extern 會失敗，因為 sensorValue 是 static
int main() {
    // 無法直接用 sensorValue
    // printf("%d", sensorValue); // ❌ 編譯錯誤：找不到 symbol

    // 應透過 readSensor() 存取
    extern void readSensor();
    readSensor();
    readSensor();
    return 0;
}
```

### 13.3. 用途 03：靜態函式（static function）：只在本檔案可用

-   範例：static 變數只在該 .c 檔內可見（封裝模組）
    -   讓函式只在該 .c 文件可見。
    -   用 math_utils.c、main.c 去模擬

```c
// math_utils.c
#include <stdio.h>

static int add(int a, int b) {
    return a + b;
}

void printSum(int x, int y) {
    printf("Sum = %d\n", add(x, y));
}
```

```c
// main.c
// extern int add(int, int); // ❌ 錯誤，找不到 add，因為它是 static

extern void printSum(int, int);

int main() {
    printSum(3, 4); // ✅ 正確使用
    return 0;
}
```

### 13.4. 用途 04：class 成員 static（C++ only）

-   效果：這個變數屬於「類別本身」，不屬於某個物件。
-   static 變數儲存在 靜態儲存區（Data Segment），它的 生命週期從程式開始到結束
-   這和「區域變數存在 stack 上、函式離開後就消失」不同
-   應用：所有物件共享一個值，如計數器、資源池等。

```cpp
class MyClass {
public:
    static int shared_count;
};
```

## 14. extern

-   變數跨檔案共用：extern 是告訴編譯器「它定義在別處」

```c
// utils.c
int counter = 42;    // 實際定義變數
```

```c
// main.c
#include <stdio.h>

extern int counter;  // 宣告：這個變數不是在這裡定義的

int main() {
    printf("Counter = %d\n", counter);
    return 0;
}
```

### 14.1. Question

Q：What is the meaning of using extern before function declaration? For example following function sum is made exter

```c
extern int sum(int x, int y, int z){
    return (x + y + z);
}
```

A：extern means nothing, sum() is same without extern keyword.

## 15. recusion

-   [遞迴費博那係數](./Recusion/fib.c)
-   [實作最大公因數](./Recusion/gcd.c)
-   [實作和內塔](./Recusion/hanoi.c)

## 16. pointer

-   指標（Pointer）是一種變數，用來儲存另一個變數的記憶體位址。
-   它不是直接存放數值，而是儲存該數值在記憶體中的位址。
-   解參考運算子（\*）：用來宣告指標變數，或用來存取某個位址所儲存的值。
-   位址運算子（&）：用來取得變數的位址，或把某變數的位址傳給指標使用。
-   [印出地址](./Pointer/print_address.c)
-   [印出指標值與地址](./Pointer/print_address_and_value.c)

### 16.1. 宣告指標變數

```c
// TODO: 宣告方式
int *x;
int *x, *y;
int *y=NULL;
float *fptr;
double *dptr;
```

-   無法變更指標所指向的 data type
-   [宣告指標變數](./Pointer/declare_pointer_variable.c)

### 16.2. 查看指標大小

-   C 語言中的指標可以分為許多不同的類型，具體取決於它所指向的數據
    -   [查看指標大小](./Pointer/pointer_size.c)

### 16.3. Integer Pointers(整數指標)

-   指向整數值的指標
-   [指標交換變數值](./Pointer/swap_value_by_pointer.c)

### 16.4. 元素指針（Element Pointer）

-   指向陣列的指標是指向整個陣列而不是陣列的第一個元素的指標。它將整個陣列視為單個單元，而不是給定元素的集合。

```c
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // ptr 指向 arr[0]
    printf("Address of arr[0]: %p\n", ptr); // 輸出 arr[0] 的位址
    return 0;
}

// ptr 是一個指向整數的指針，初始化為 arr，因此它指向陣列的第一個元素（arr[0]）的位址。
```

#### 16.4.1. 存取陣列元素的位址

##### 16.4.1.1. 使用 `ptr + i`

-   `ptr + i` 計算第 i 個元素的位址。
-   指針算術會根據元素類型自動調整偏移量（例如，int 類型通常占 4 位元組，ptr + 1 會移動 4 位元組）。

##### 16.4.1.2. 使用 `&ptr[i]`

-   `&ptr[i]` 直接取得第 i 個元素的位址。
-   這是` ptr + i` 的語法糖，編譯器會將其轉換為 `ptr + i`。

```c
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // ptr 指向 arr[0]

    // 使用 ptr + i 取得位址
    printf("Addresses using ptr + i:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %p\n", i, ptr + i);
    }

    // 使用 &ptr[i] 取得位址
    printf("Addresses using &ptr[i]:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %p\n", i, &ptr[i]);
    }

    return 0;
}
```

#### 16.4.2. 存取陣列元素的值

##### 16.4.2.1. 使用 `*(ptr + i)（指針算術）`

-   `ptr + i`：計算第 i 個元素的位址（移動 i 個元素大小的距離）。
-   `*(ptr + i)`：解參考該位址，取得第 i 個元素的值。

##### 16.4.2.2. 使用 `ptr[i]`（語法糖）

-   `ptr[i]` 是最直觀的方式，類似於陣列的索引語法。
-   編譯器會自動將 `ptr[i]` 轉換為 `*(ptr + i)`。

```c
// 遍歷陣列並輸出元素
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // ptr 指向 arr[0]

    // 使用 ptr[i] 遍歷
    printf("Using ptr[i]: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");

    // 使用 *(ptr + i) 遍歷
    printf("Using *(ptr + i): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}

// Using ptr[i]: 1 2 3 4 5
// Using *(ptr + i): 1 2 3 4 5
```

-   [分別用陣列跟陣列指標傳遞，並印出值跟地址](./Pointer/array_pointer_func.c)
-   [指標常數與陣列](.//Pointer/pointer_constants_arrays.c)
-   [指標變數當陣列使用](./Pointer/using_pointer_variable_as_array.c)

### 16.5. Array Pointer（陣列指標）

-   是「指向整個陣列」的指標，而不是指向陣列的某個元素。
-   為什麼要用 Array Pointer？
    -   保留陣列大小資訊：傳給函式後還知道是 int[5]
    -   適合處理多維陣列：指向 int[2][3]、int[3][4][5] 的情境

| 宣告方式              | 說明                      |
| --------------------- | ------------------------- |
| `int *p = arr;`       | 指向 `arr[0]`，第一個元素 |
| `int (*p)[5] = &arr;` | 指向整個 `arr[5]` 陣列    |

```c
int arr[5] = {10, 20, 30, 40, 50};

int *p1 = arr;       // p1 指向 arr[0]
int (*p2)[5] = &arr; // p2 指向整個 arr 陣列

// 存取元素
printf("%d\n", p1[2]);        // 印出 30
printf("%d\n", (*p2)[2]);     // 一樣印出 30

// sizeof 差很大
printf("%lu\n", sizeof(*p1)); // 4（int 大小）
printf("%lu\n", sizeof(*p2)); // 20（5 個 int 大小）
```

-   [如何使用指向整個陣列的指標來存取陣列元素](./Pointer/access_array_using_pointer_to_array.c)
-   [Array Pointer 傳入函式](./Pointer/array_pointer_by_fun.c)
-   [指向陣列的第一個元素的指標與指向陣列的指標](./Pointer/pointer_to_first_element.c)
-   [指向 2D 陣列](./Pointer/pointers_to_2D_array.c)
-   [指向 3D 陣列](./Pointer/pointers_to_3D_array.c)

### 16.6. Function Pointer（函數指標）

-   函數指針是指向函數的指針變數，它儲存的是函數的記憶體位址，而不是資料。透過函數指針，可以動態地呼叫函數。
-   用途：用於實現回調函數（callback）、動態行為、模擬物件導向等場景。
-   特性

    -   指向程式碼段：函數指針指向的是程式碼的記憶體位址，而不是資料
    -   函數指針的返回類型和參數列表必須與它指向的函數完全一致，否則編譯器會報錯
    -   不像資料指針，函數指針不能加減（如 fptr++ 是非法的）
    -   未初始化時可設為 NULL

    ```c
    ///// 宣告函數指針 /////
    // 宣告一個函數指針，指向返回 int 且接受兩個 int 參數的函數
    int (*fptr)(int, int);

    ///// 初始化函數指針 /////
    pointer_name = &function_name; // 使用 & 取函數位址
    // 或
    pointer_name = function_name;  // 函數名稱本身隱含位址，& 可省略

    ///// 呼叫函數 /////
    (*fptr)(args); // 傳統方式，使用 * 解參考
    fptr(args);    // 簡化方式，直接呼叫
    ```

    ```c
    // 函數指針的返回類型和參數列表必須與它指向的函數完全一致，否則編譯器會報錯

    // 宣告一個函數
    int add(int a, int b) {
        return a + b;
    }

    // 宣告一個函數指標
    int (*fptr)(int, int);  // ✅ 簽名完全匹配！

    // 指向 add 函數
    fptr = add;  // OK！
    ```

-   [函數指標基本範例](./Pointer/function_pointer_basic_example.c)
-   [將指標作為回傳值](./Pointer/using_pointer_as_return.c)
-   [檢查 NULL](./Pointer/function_pointer_null.c)
-   [函數指針應用場景--Callback](./Pointer/function_pointer_callback.c)
    -   將函數作為參數傳遞，實現動態行為
-   [函數指針陣列](./Pointer/function_pointer_array.c)

### 16.7. Structure Pointer

-   [基本操作 Structure Pointer](./Pointer/basic_structure_pointer.c)

### 16.8. Double Pointer

![upgit_20250319_1742372900.png](https://raw.githubusercontent.com/kcwc1029/obsidian-upgit-image/main/2025/03/upgit_20250319_1742372900.png)

-   定義：雙指針是指向另一個指針的指針。簡單來說，第一個指針儲存變數的位址，而雙指針儲存第一個指針的位址。
    -   假設變數是一個房間，指針是房間的門牌號碼（位址），那麼雙指針就是指向門牌號碼的一張地圖。
-   用途：雙指針在動態記憶體分配、傳遞指針給函數、處理多維陣列等場景中非常有用。

```c
// 宣告雙指針
int **dptr; // 宣告一個指向 int* 的雙指針

// 初始化雙指針
pointer_name = &single_pointer;
```

```c
#include <stdio.h>

int main() {
    int var = 10;        // 變數
    int *ptr = &var;     // 單指針，指向 var
    int **dptr = &ptr;   // 雙指針，指向 ptr

    printf("var: %d\n", var);      // 直接訪問變數
    printf("*ptr: %d\n", *ptr);    // 透過單指針訪問
    printf("**dptr: %d\n", **dptr); // 透過雙指針訪問

    return 0;
}
```

-   [動態分配二維陣列](./Pointer/dynamic_2d_array.c)
-   [傳遞字串陣列給函數](./Pointer/string_array_function.c)
-   [修改指針的值](./Pointer/pointer_assignment.c)

### 16.9. Null Pointer

-   NULL 指針是指不指向任何有效記憶體位址的指針。它的值通常是 0 或 `(void*)0`，由 C 標準定義為 null pointer constant。
-   用來表示指針未指向任何有效物件或函數，常用於初始化、錯誤檢查和資料結構中。

```c
// 宣告和初始化
type *pointer_name = NULL;
// 或
type *pointer_name = 0; // 在指針上下文中，0 會被轉換為空指針。
```

-   不指向任何有效位址： NULL 指針不指向任何物件或函數，解參考它會導致未定義行為（通常程式崩潰）。
-   所有 NULL 指針相等： 任何類型的 NULL 指針（例如 int*、char*）在比較時都相等。
-   與 void 指針的區別：

    -   NULL 指針是一個值（表示「無」）。
    -   Void 指針（void\*）是一種類型，可以指向任何類型的資料。

-   [初始化 NULL 指針](./Pointer/null_init.c)
-   [檢查動態記憶體分配是否成功](./Pointer/null_malloc_check.c)
-   [在資料結構中表示結束](./Pointer/null_linked_list.c)
    -   在鏈結串列或樹等資料結構中，NULL 常用來表示節點的結束。

#### 16.9.1. NULL 指針與 Void 指針的區別

| **特性** | **NULL 指針**               | **Void 指針**                      |
| -------- | --------------------------- | ---------------------------------- |
| **定義** | 不指向任何有效位址的值      | 一種可以指向任何類型資料的指針類型 |
| **類型** | 任何指針類型都可以設為 NULL | 只能是 void\* 類型                 |
| **比較** | 所有 NULL 指針相等          | 不同 Void 指針可能不相等           |
| **範例** | int \*ptr = NULL;           | void \*ptr;                        |

### 16.10. 優點

-   Pointers are used for dynamic memory allocation and deallocation.
-   An Array or a structure can be accessed efficiently with pointers
-   Pointers are useful for accessing memory locations.
-   Pointers are used to form complex data structures such as linked lists, graphs, trees, etc.
-   Pointers reduce the length of the program and its execution time as well.

### 16.11. 缺點

-   Memory corruption can occur if an incorrect value is provided to pointers.
-   Pointers are a little bit complex to understand.
-   Pointers are majorly responsible for memory leaks in C.
-   Uninitialized pointers might cause a segmentation fault.

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
