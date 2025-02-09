# C

## 1. 基本安裝

-   要安裝的東西
    -   gcc
    -   gdb
    -   g++
    -   binutils

### 13.9. BUG：明明已經安裝好 gcc 或 gdb，可是 vscode 的 terminal 卻無法 work

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

## 5. 標頭擋

```c
#include <內建標題檔.h>
#include "自訂標題檔.h"
```

## 6. bit/bytes

-   位元 (bit)
    -   是電腦中最小的數據單位。
    -   它可以表示 0 或 1 兩種狀態（像開或關，對應於電路中的電流有或沒有）。
-   位元組 (byte)
    -   是由 8 個位元 (bits) 組成的數據單位。
    -   每個位元都有兩種可能性（0 或 1），所以 8 個位元可以有 256 種組合。

## 記憶體分段

-   在程式的記憶體佈局中，分段是將不同類型的數據和程式碼分開存儲的一種方式。
-   提高效率：將程式碼和數據分開，方便管理和優化。
-   安全性：通過設置唯讀或可讀寫權限，防止數據被意外修改。
-   節省空間：未初始化的變數不佔用可執行文件的大小。

### 記憶體分段佈局（從低地址到高地址）

#### .text 段

-   存儲程式的機器指令（編譯後的程式碼）。
-   通常是唯讀的，防止程式碼被意外修改。
-   包含函數的實現（例如 main 函數）。

```c
int main() {
    return 0;
}
```

#### .rodata 段

-   存儲唯讀數據，例如字串常量和全局 const 變數。
-   通常是唯讀的，防止數據被修改。
-   可以節省記憶體，因為相同的常量可能會被共享。

```c
const char *str = "Hello, World!";  // 字串常量存儲在 .rodata 段
```

#### .data 段

-   存儲已初始化的全局變數和靜態變數。
-   變數的值在編譯時就已經確定。
-   通常是可讀寫的。

```c
int global_var = 42;  // 存儲在 .data 段
```

#### .bss 段

-   存儲未初始化的全局變數和靜態變數。
-   .bss 段中的變數在程式啟動時會被初始化為零，這是因為標準規定未初始化的全局變數和靜態變數的值為零。
-   不佔用可執行文件的大小，因為只記錄變數的大小。

```c
int uninitialized_var;  // 存儲在 .bss 段
```

#### Stack（堆疊）

-   用於存儲區域變數和函數調用信息（例如返回地址、參數等）。

```c
void func() {
    int local_var = 10;  // 存儲在堆疊上
}
```

#### Heap（堆）

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

-   變數的宣告告訴電腦要為變數分配多少記憶體空間。
-   變數是強型別(strongly typed)語言的一部分，這意味著在宣告變數時，必須明確指定其資料型態。
-   變數命名規則：https://reurl.cc/A2zqNQ

```c
int sum = 0;
```

### 7.1. 變數的宣告

-   變數宣告就是在程式碼中指定變數名稱和其資料型態

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

### 7.2. 基本資料型態

-   可以用 sizeof()查詢資料長度。

![image](https://cdn.discordapp.com/attachments/1286741860538122281/1332376413675851796/image.jpg?ex=679507bb&is=6793b63b&hm=eadd7c4ce076d52d8b93f8cf136e9b124e25f5d371e048fd476335155b9f06fe&)

### 7.2.1. 整數型

-   int：4byte

```c
int a = 80; // 十進位
int a = 0120 // 八進位(前面+個0)
int a = 0x50 // 十六進位

// 修飾詞
int a = 58; // 占 4byte(32bits)
short int a = 58; // 占 2byte(16bits)
long int a = 58; // 占 8byte(64bits)
```

### 7.2.2. 浮點數

-   float：4byte
-   double：8byte
-   [浮點數資料宣告](./Basic%20Data%20Type/float01.c)
-   [浮點數輸入輸出](./Basic%20Data%20Type/float02.c)

### 7.2.2.3. 類別轉換

-   double => float => int
-   [類別轉換](./Basic%20Data%20Type/data_type_change.c)
-   計算泰勒展開式[](./Basic%20Data%20Type/taylor_expansion.c)

![image](https://cdn.discordapp.com/attachments/1286741860538122281/1332676020389548142/image.jpg?ex=67961ec3&is=6794cd43&hm=88bed968ad8e77384ac88bcdb2c4f79b740f86247efa56ea41c41cc5e15ef720&)

### 7.4. 強制型態轉換

-   如果需要將某個資料強制轉換為另一種型態，可以使用強制轉換運算符

```c
double x = 5.7;
int y;

y = (int) x;  // 將 double 型態的 x 強制轉換為 int，結果為 5
```

### 7.2.3. 字元 char

-   字元型用於存儲單個字符，使用 ASCII 編碼來表示字符的數值
-   佔用 1 個位元組。
-   範圍：-128 到 127 或 0 到 255（取決於是否使用 signed 或 unsigned）。
-   跳脫字符：在 C 語言中，字串其實是一個字符陣列，以空字元 '\0' 作為結束標誌

```c
char str[] = "Hello, World!";
// `\n`：換行
// `\t`：水平製表符
// `\\`：反斜線字符
```

### 11. ASCII

-   ASCII（American Standard Code for Information Interchange）是早期設計的一種字符編碼方式，用來將字母、數字和符號對應到二進制數字。
-   [字元轉換 ASCII](./Basic%20Data%20Type/ascii.c)

## 9. 運算

-   [交換兩個變數的值](./Operation/swao01.c)
-   [交換兩個變數的值](./Operation/calculate_change.c)

## 10. 輸入輸出

### 10.1. scanf

-   輸入的格式必須和指定的格式化字串一致（如 %d 表示整數，%f 表示浮點數等）

### 10.2. fgets

-   從標準輸入或文件中讀取一行字串
-   比 gets 更安全，因為可以指定最大讀取長度

```c
char str[100];
fgets(str, sizeof(str), stdin);
```

### 10.3. printf

-   格式化輸出到標準輸出（通常是屏幕）

### 10.4. puts

-   比 printf 簡單，適合輸出純文本
-   輸出字串並自動換行

```c
puts("Hello, World!");
```

## 12. flow control

### 12.1. 判斷式

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

### 12.2. 迴圈

![image](https://cdn.discordapp.com/attachments/1286741860538122281/1332351648785240145/image.jpg?ex=6794f0aa&is=67939f2a&hm=e7fe7b2d31924bfa30811e0988710f4e35005915844b008f15b32a061fb88a19&)

-   [最大公因數](./Flow%20Control/gcd.c)
-   [質數判斷](./Flow%20Control/prime.c)
-   [模擬長除法](./Flow%20Control/long_division.c)
-   [檢查 11 的倍數](./Flow%20Control/check_multiples_of_11.c)

### 12.3. break

-   立即退出 while、for、do while 或 switch 語句，繼續執行後續程式碼。
-   跳出 switch 語句，避免執行後續的 case。

```cpp
for (int i = 1; i <= 10; i++) {
    if (i == 5) break; // 當 i 為 5 時跳出迴圈
    printf("%d ", i);
}
// 輸出：1 2 3 4
```

### 12.4. continue

-   跳過當前迴圈中的剩餘語句，進入下一次迭代。

```cpp
for (int i = 1; i <= 5; i++) {
    if (i == 3) continue; // 當 i 為 3 時跳過
    printf("%d ", i);
}
// 輸出：1 2 4 5
```

## 13. array

-   占有一塊連續的記憶體空間。

### 13.1. initialization

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
    -   核心：反覆比較相鄰的元素，並將較大的元素逐步「冒泡」到數列的末尾
    -   會有雙重迴圈
        -   外部：回和數
        -   內部：
    -   [bubble_sort01.c](./bubble%20sort/bubble_sort01.c)
    -   優化：在最佳情況下，如果數列已經有序，我們可以提早停止排序。
    -   [bubble_sort02.c](./bubble%20sort/bubble_sort02.c)

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

### 13.8. 九宮格遊戲

-   [nine_grid_game.c](./Nine%20Grid%20Game/nine_grid_game.c)

## 14. 函數

-   包含五個部分：函式庫、標頭檔(header file)、函數名稱、參數、回傳

### 14.1. 參數傳遞

-   分為形式參數(formal parameter)跟實際參數(actual parameter)
-   [主程式與函數內的地址不同](./Function/main_program_function_address.c)

### 14.2. 陣列參數傳遞

-   陣列是以實際參數(actual parameter)的方式傳值
-   [陣列參數傳遞](./Array/array_parameter_passing.c)

### 14.3. 使用函數對陣列操作

-   因為陣列是實際參數，所以可以用函數的方式去對陣列操作
-   [使用函數對陣列操作](./Function/operate_array_by_function.c)

### 其他練習

-   [陣列中找特定值](./Function/array_find_specific_value.c)

## 21. recusion

-   [遞迴費博那係數](./Recusion/fib.c)
-   [實作最大公因數](./Recusion/gcd.c)
-   [實作和內塔](./Recusion/hanoi.c)

## 15. 指標

-   %p：用於輸出記憶體地址
-   [變數地址存取](./Pointer/print_variable_address.c)
-   [陣列地址存取](./Pointer/print_array_address.c)

### 15.3. 宣告指標變數

-   無法變更指標所指向的 data type

```c
// TODO: 宣告方式
int *x;
int *x, *y;
int *y=NULL;
float *fptr;
double *dptr;
```

-   [宣告指標變數](./Pointer/declare_pointer_variable.c)
-   [查看指標大小](./Pointer/pointer_size.c)
-   [指標交換變數值](./Pointer/swap_value_by_pointer.c)
-   [將陣列+3](./Pointer/array_add3_by_pointer.c)

### 15.7. 指標變數當陣列使用

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

-   [指標變數當陣列使用](./Pointer/using_pointer_variable_as_array.c)

### 15.8. [將指標作為回傳值](./Pointer/using_pointer_as_return.c)

### 15.9. [雙重指標](./Pointer/double_pointer.c)

-   指標是指向資料型態
-   雙重指標是指向目標的指標

### 15.10. [指標運算](./Pointer/pointer_arithmetic.c)

### 15.11. [指標常數與陣列](.//Pointer/pointer_constants_arrays.c)

## 參考(reference) (CPP 才有)

-   reference 就是一種別名(alias)
-   一個變數可以有很多 reference
-   [reference 示範](./Reference/reference_size.cpp)
-   [reference 指定](./Reference/ref_init_assign.cpp)：reference 直接代表另一個變數，因此也可以直接作使用。

### reference 傳遞

-   [使用參考跑 fof](./Reference/sum_ranged_for.cpp)
-   [使用指標傳遞參數](./Reference/swap_by_pointer.cpp)
-   [使用參考傳遞參數](./Reference/swap_by_reference.cpp)
-   [指標作為參數傳遞的過程](./Reference/pointer_parameter.cpp)
-   [指標參考作為參數傳遞的過程](./Reference/reference_parameter.cpp)
-   [參考作為 return](./Reference/reference_return.cpp)

## 16. 字元

-   [計算字元大小](./Char/char_size.c)

### 16.2. 常用函數<ctype.h>

-   isalnum(int c) 檢查字符是否為字母或數字（a-z、A-Z、0-9）。
-   isalpha(int c) 檢查字符是否為字母（a-z、A-Z）。
-   isdigit(int c) 檢查字符是否為數字（0-9）
-   islower(int c) 檢查字符是否為小寫字母（a-z）。
-   isupper(int c) 檢查字符是否為大寫字母（A-Z）。
-   isspace(int c) 檢查字符是否為空白字符（空格、換行 \n、回車 \r、製表符 \t 等
-   ispunct(int c) 檢查字符是否為標點符號（非字母、數字、空白字符的可打印字符）
-   iscntrl(int c) 檢查字符是否為控制字符（ASCII 0-31 和 127）
-   tolower(int c) 將大寫字母轉換為小寫字母。
-   toupper(int c) 將小寫字母轉換為大寫字母。

## 17. 字串

-   [字串就是字元陣列](./String/string_char_array.c)
-   [使用字元陣列模擬字元](./String/char_array_simulate_string.c)

### 17.1. 字元指標

-   [字元指標](./String/character_pointer.c)
-   [不同字串格式各有不同的記憶體空間](./String/different_string_format.c)

### 17.3. 字串函數

#### 17.3.1. strlen：計算字串長度

-   [strlen01](./String/strlen01.c)
-   [strlen02](./String/strlen02.c)

#### strcat：連接字串 & strcpy：複製字串

```
char *strcat(char *destination, *source)
- 將source字串複製並接到destination字串後面
- source字串的結尾'\0'，也會依同複製
```

```
char *strcpy(char *destination, *source)
- 將source字串複製到destination字串，並回傳destination位址。
- source字串的結尾'\0'，也會依同複製
```

-   會發生緩衝區覆蓋(buffer overrun)
-   [strcat01](./String/strcat01.c)
-   [strcpy01](./String/strcpy01.c)
-   [比較 3 種字串在 strcpy 處理(重要)](./String/strcpy02.c)

#### 17.3.4. strncpy、strncat 第三個參數(處理緩衝區覆蓋，但要手動'\0')

```
char *strncpy(char *destination, *source, int i)
- 將source字串複製到destination字串，並回傳destination位址，限制複製i個字元
- 如果 source 的長度小於 n，strncpy 會用空字元 \0 填充到 n 的長度。
- 如果 source 的長度大於或等於 n，則 strncpy 不會自動在 destination 的結尾添加 \0。
```

-   [strncpy、strncat](./String/strncpy_strncat.c)

#### 17.3.5. strcmp、strncmp 字串比較

```
int strcmp(char *string1, *string2);
int strncmp(char *string1, *string2, int n);
```

-   範例：12 生肖排序
    -   [12 生肖陣列排序](./String/ZodiacSort01.c)
    -   [12 生肖指標排序](./String/ZodiacSort02.c)

#### 17.3.6. strchr、strrchrr、strstr

```
char *strchr(char *string, char c); // 前往後找c，返回找到目標的地址
char *strrchr(char *string, char c); // 後往前找c，返回找到目標的地址
```

-   [strchr 將路徑中的每個子資料夾名稱抽出](./String/strchr.c)

```
char *strstr(char *string1, char *string2); 在string1中找string2，找到返回string2出現第址
```

-   [在 12 生肖中找有 er 字串的](./String/strstr.c)

#### 17.3.7. 切割字串：strtok

```
char *strtok(char *string, delimeters);
```

-   [切割字串](./String/strtok.c)

## 18. 宣告修飾

-   [輸出各整數類別位元小](./Basic%20Data%20Type/declaration_modifiers.c)
-   解決了不同平台上整數大小不一致的問題 => C99 跟 C++11
-   [C99 有號數](./Basic%20Data%20Type/c99_signed.c)：
-   [C99 無號數](./Basic%20Data%20Type/c99_unsigned.c)
-   [C++11 有號數](./Basic%20Data%20Type/c++11_signed.cpp)：
-   [C++11 無號數](./Basic%20Data%20Type/c++11_unsigned.cpp)：

### 常數(const)

-   方式 1：使用#define
    -   `#define` 是一個預處理指令
    -   在編譯期間，所有使用到這個名稱的地方，預處理器會用對應的值來替換
    -   在編譯前就完成了代換
    -   優點：高效：由於在編譯時直接替換，需要額外的記憶體空間來存儲常數值
    -   缺點：沒有類型檢查，因此不受任何編譯期的類型檢查，這可能導致一些潛在的錯誤

```c
#define PI 3.14159
#define SQUARE(x) (x * x)

// 如果使用SQUARE(3 + 1)，就會變成(3 + 1 * 3 + 1)，就不是預期答案
```

-   方式 2：使用 const
    -   const 定義的常數有類型，並且會在記憶體中分配空間。
    -   優點：因為有資料型態，因此可以接受編譯器的類型檢查，從而避免因類型錯誤導致的問題
    -   缺點：佔用記憶體
-   [使用常數計算圓面積](./Const/circle_area.c)

### 18.4. const 指標

```
int *ptrToInt = &i; ptrToInt 一個指向 int 型別變數的指標
const int *ptrToConstInt = &i; 一個指向 const int 型別變數 的指標(可以用*區分) => 不能透過指標修改目標變數的值，但可以改變指標的指向
int * const constPtrToInt = &i; 一個指向 int 的 常量指標 => 只能指向初始化時的地址，但可以透過指標修改目標變數的值
```

### 18.5. static

-   更改生命週期：從程式開始執行時初始化，一直存在於程式運行期間，直到程式結束才會被銷毀。
-   [static 範例](./Basic%20Data%20Type/static01.c)

## 19. 結構(structuure)

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

### 19.1. [結構初始化](./Structure/struct_init.c)

### 19.2. 結構指標

-   按照正常想法，如果要在結構指標取值，需要先使用星號取整個結構的值，在用結構的語法 => \*(ptr).id
-   可以直接寫成 ptr->id
-   [結構指標](./Structure/struct_pointer.c)

-   [使用結構處理負數](./Structure/complex01.c)
-   [結構傳遞](./Structure/complex02.c)

### 19.3. typedef

-   結構在初是化實，要寫兩個英文字母，typedef 可以把它節和在一起
-   [在結構中使用 typedef](./Structure/complex03.c)

### 19.4. 結構標題檔

-   [可以把結構用標題檔儲存](./Structure/complex04.c)

### 19.5. 在結構中使用結構

-   [在結構中使用結構](./Structure/student01.c)

## 20. 程式記憶體分段

-   程式在執行時，會將記憶體劃分為不同的區域（分段）
-   每個區域用於存儲不同類型的數據
-   安全性：將程式碼與數據分離，防止數據被意外修改。
-   效率：根據數據的特性（例如是否可修改、是否初始化）進行分類存儲，提高記憶體使用效率。
-   管理方便：分段後，作業系統可以更輕鬆地管理記憶體，例如設置唯讀保護或動態分配記憶體。

## 22. 檔案處理

-   開啟檔案方式

```c
#include <stdio.h>
FILE *fp;
fp = open(filename, option)

fclose(fp); //關閉檔案

// 開啟模式
// r
// w：
// a：append
```

### 22.1. 以字元處理檔案

```c
int fget(FILE *p) // 讀取字元並回傳
int fput(int c, FILE *p) // 寫入(成功寫入的話也會回傳)
```

### 22.2. 重複讀取字元到 EOF

```c
while((c=fget(fp))!=EOF){

}
```

-   [文字覆蓋範例](./file/file01.c)
-   [文字添加範例](./file/file02.c)
-   [文字讀寫範例](./file/file03.c)

### 22.3. 以行處理檔案

```c
int fgets(char *string, int num, FILE *p) // 讀取一行並回傳
int fputs(const char *string, FILE *p) // 寫入(成功寫入的話也會回傳)

// 使用fgets讀檔
#define STRINGLEN 128
char string[STRINGLEN];

while(fgets(string, STRINGLEN, fp)!=NULL){
    // ...
}
```

-   [以 fput 逐行寫入，在逐行讀取](./file/file04.c)

### 22.4. 以格式處理檔案

```c
int fprintf(FILE *fp, const char *format, ...);
int fscanf(FILE *fp, const char *format, ...);
```

-   [使用 fprintf，fscanf 讀寫檔案](./file/file05.c)

### 22.5. 二進制檔案處理

-   [文字與二進制差別](./file/file06.c)

### 22.6. 緩衝區為主的輸出入

-   緩衝區(buffer)是一塊記憶體，用來暫存數據，避免每次寫入或讀取文件時都直接操作磁碟，提升效率。

```c
int fread(void *buffer, int size, int n, FILE *fp);
// fread以二進制的方式，由fp連結的檔案中讀取n筆資料，每筆資料大小為size
// 這些資料由檔案讀到buffer

int fwrite(const void *buffer, int size, int n, FILE *fp);
// fwrite以二進制的方式將n筆資料大小為size的資料從buffer寫到檔案
```

-   [使用 fread，fwrite](./file/file07.c)
-   [將 struct 取操作](./file/file08.c)

### 22.7. fseek 移動讀寫位置

```c
int fseek(FILE *fp, long int offset, int base);
// 將讀寫位置跳到offset及base所指示的位置
// offset 是以byte為單位
// base可分為3種：
//  SEEK_SET：從檔案開頭開始計算位移量 offset
//  SEEK_CUR：從目前檔案指標位置開始計算位移量 offset
//  SEEK_END：從檔案結尾開始計算位移量 offset
```

-   [使用 fseek 操作檔案](./file/file09.c)

### 22.8. EOF 測試

-   前面都是使用 fget 去檢查回傳質是否為 EOF，其實 stdio.h 也有專門測試 EOF 的函數
-   EOF 是一種狀態，而非一種字元

```c
int feof(FILE *fp)

// 讀取檢查
int c = fget(fp);
while(!feof(fp)){
    // ...
    c = fget(fp);
}
```

## 23. 動態記憶體配置

-   malloc：跟系統要記憶體
-   free：還系統記憶體

```c
#include <stdlib>
void *malloc(int size);
void free(void *ptr);
```

-   [跟系統要求一個 int 的記憶體空間](./dynamic%20memory/malloc01.c)
-   [跟系統要求一個結構的記憶體空間](./dynamic%20memory/malloc02.c)

## 24. LinkList(可以用力扣去說明)

-   節點概念

```c
typedef struct listNode{
    int data;
    struct listNode *next;
}ListNode;
```

-   [建立 listNode](./LinkList/create_node.c)
-   [遍歷 listNode](./LinkList/traverse_node.c)

## 25. 前置處理

### 25.1. #include

### 25.2. #define

### 25.3. 條件編譯(#if)

```c
#define DEBUG_LEVEL 4

#if DEBUG_LEVEL==3
執行...
#endif

#if DEBUG_LEVEL==4
執行...
#endif
```

-   有時候我們需要修改 DEBUG_LEVEL 的值，但又不想到檔案內修改，可以使用命令行去修改

```
gcc -DEBUG_LEVEL=8 program.c
```

-   但這樣會有重複定義的問題，因此程式碼可以修改成

```c
#ifndef DEBUG_LEVEL
#define DEBUG_LEVEL 4
執行...
#endif
```

### 25.4. `__LINE__ __FILE__`

-   取得當前程式碼的行號和檔案名

```
__LINE__	取得當前行號（整數）
__FILE__	取得當前檔案名稱（字串）
```

```c
#include <stdio.h>

int main() {
    printf("這行是第 %d 行，檔案名稱是 %s\n", __LINE__, __FILE__);
    return 0;
}
// 輸出
// 這行是第 4 行，檔案名稱是 .\test.c
```

## 26. C standard library (stdlib)

### 26.1. 排序：qsort

```c
void qsort(void *base, int num, int size, int(*compare)(const void*, const void*))
```

-   [qsort](./Stdlib/qsort.c)
-   [qsort 排序日期](./Stdlib/qsort_date.c)
-   [qsort 排序字串陣列](./Stdlib/qsort_string.c)
-   [以 1 的個數做排序](./Stdlib/qsort_1bit.c)

### 26.2. 字串轉換函數：

```
atoi(const char *str)：string to int
atol(const char *str)：string to long
atof(const char *str)：string to float
strtol(const char *str, char **ptr, int base)：字串依照基底轉換為長整數
```

-   [字串轉數值](./Stdlib/stdlib_conversion.c)

### 26.3. 產生隨機數：

```c
#include <time.h>

void srand(unsigned int seed); // 設定隨機數產生器的種子
int rand(void); // 產生一個範圍在 0 到 RAND_MAX 之間的隨機整數
```

-   [隨機數](./Stdlib/rand.c)

## 28. C 語言的命令列參數（Command Line Arguments）

```
int main(int argc, char *argv[])
// argc：參數的個數（包含程式本身）
// *argv[]：參數的陣列
```

-   [列出命令列參數](./Command_Line_Arguments/print_command_line.c)
-   [轉換數值](./Command_Line_Arguments/command_line_change.c)
-   [使用 strtol() 處理進階數字轉換](./Command_Line_Arguments/command_line_strtol.c)

## 29. GPT 給的學習關鍵字

### 29.1. 系統核心功能

-   記憶體管理：`malloc()`、`calloc()`、`realloc()`、`free()`

### 29.2. 多執行緒與並行程式設計

-   Pthreads：`pthread_create()`、`pthread_join()`、多執行緒應用，如處理器密集型任務。
-   同步機制：互斥鎖 (`pthread_mutex`)、條件變數 (`pthread_cond`)、信號量。
-   網路程式設計：`socket()`、`bind()`、`listen()`、`connect()`、`send()`、`recv()`。

### 29.3. 嵌入式系統基礎

-   硬體控制：GPIO、I2C、SPI、UART。
-   FreeRTOS。

## 30. 還沒處理的

-   C 語言式如何處理不定個數參數的問題
-   分段在記憶體中的佈局(從低地址到高地址)
    -   .text 段：存儲程式碼。
    -   .rodata 段：存儲唯讀數據。
    -   .data 段：存儲已初始化的全局變數。
    -   .bss 段：存儲未初始化的全局變數。
    -   Heap（堆）：用於動態記憶體分配（例如 malloc）。
    -   Stack（堆疊）：用於存儲區域變數和函數調用信息。

# CPP

## 3. 第一支 cpp 程式

```cpp
#include <iostream> // 標準入串流函數庫(IO stream library)
using namespace std;

main(){
    int i = 100;
    int j = 200;
    cout<<i<<endl;
    cout<<j<<endl;
}
```

### 輸入輸出

```cpp
#include <iostream>
using namespace std;

main(){
    int i;
    cin >> i;
    cout << i << endl;
}
```

-   [連續讀入(判斷 eof)](./)

### 名稱空間（Namespace）

-   名稱空間（Namespace） 是 C++ 中用來組織程式碼的一種機制，目的是避免名稱衝突
-   標準庫的所有內容（如 cout、vector、string 等）都定義在 std 名稱空間中
-   如果沒有使用 using namespace std;，每次使用標準庫時都需要寫 std::

```cpp
// 沒使用using namespace std
main(){
    std::cout << "Hello, World!" << std::endl;
}

// 有使用using namespace std
using namespace std;
main(){
    cout << "Hello, World!" << endl;
}
```

### 操控子（Manipulator）

-   操控子是 C++ 中用來控制輸入輸出格式的工具。
-   操控子可以設置輸出的格式，例如數字進制、欄寬、對齊方式等。
-   引入 `#include <iomanip>`

| 操控子            | 功能描述                                     |
| ----------------- | -------------------------------------------- |
| `dec`             | 將數字以十進位格式輸出。                     |
| `oct`             | 將數字以八進位格式輸出。                     |
| `hex`             | 將數字以十六進位格式輸出。                   |
| `setw(n)`         | 設置下一個輸出欄位的寬度為 `n` 個字符。      |
| `setprecision(n)` | 設置浮點數的有效位數為 `n`。                 |
| `setfill(c)`      | 設置填充字符為 `c`，通常與 `setw` 一起使用。 |
| `left`            | 將輸出內容靠左對齊。                         |
| `right`           | 將輸出內容靠右對齊（預設行為）。             |
| `endl`            | 插入換行符並刷新輸出緩衝區。                 |

-   [設置數字進制](./Basic%20Data%20Type/set_base_number.cpp)
-   [設置欄寬和填充字符](./Basic%20Data%20Type/padding_character.cpp)
-   [設置浮點數的有效位數](./Basic%20Data%20Type/floating_point_numbers.cpp)

## class

-   [建立類別](./Class/class_basic.cpp)
-   class vs. struct：
    -   struct 預設成員是 public
    -   class 預設成員是 private

### 建構子

-   當 物件被創建時會自動執行，通常用來初始化物件的屬性。
-   [簡單建構子範例](./Class/Constructor01.cpp)
-   [初始化成員列表{}](./Class/init_member01.cpp)
-   [初始化成員列表:](./Class/init_member02.cpp)
-   [建構子多載](./Class/constructor_overloading.cpp)

### 解構子（Destructor）

-   當 物件生命週期結束時，解構子會被自動呼叫，通常用來釋放動態記憶體（delete）、關閉檔案、釋放資源等。
-   不接受參數（不能多載）
-   沒有回傳值
-   當物件超出作用域時，自動呼叫
-   [基本解構子範例](./Class/basic_destructor.cpp)
-   [解構子釋放動態記憶體](./Class/basic_destructor_delete_memory.cpp)
-   [釋放動態陣列](./Class/delete_array.cpp)
-   [釋放動態物件](./Class/delete_object.cpp)

### 繼承

-   [基本繼承範例](./Class/Inheritance01.cpp)
-   存取修飾詞（public / protected / private）
    -   public → public ✅ 可在類別內 & 外存取
    -   protected public → protected 🔒 只能在子類別內存取
    -   private public → private ❌ 只能在類別內部使用，子類別不能直接存取
    -   [存取修飾詞](./Class/public_protected_private.cpp)
-   [解構子在繼承中的行為](./Class/destructor_inheritance.cpp)

#### override：確保函數正確覆寫

-   當子類別要覆寫（Override） 父類別的虛擬函數時，可以加上 override，讓編譯器檢查是否真的在覆寫，避免拼錯函數名稱或錯誤的函數簽名。
    -   [參數不同導致隱藏而非覆蓋](./Class/override_error.cpp)
    -   [使用 override 更正](./Class/override_fix.cpp)

#### final：防止進一步覆寫或繼承

-   [防止子類別覆寫函數](./Class/final_function.cpp)
-   [防止類別被繼承](./Class/final_inheritance.cpp)

### 作用域解析運算子(Scope Resolution Operator)(::)

-   用來 指定名稱的作用域（Scope），確保編譯器知道某個函式或變數屬於哪個類別或命名空間。
-   [類別成員函式的定義](./Class/scope_resolution_operator01.cpp)：當我們在類別外部定義成員函式時，必須使用 :: 來指定它的作用域
-   [靜態成員變數（Static Members）](./Class/scope_resolution_operator02.cpp)：靜態變數（static）屬於類別本身，而不是個別物件，所以需要 :: 來存取
-   [命名空間（Namespace）](./Class/scope_resolution_operator03.cpp)：當有 相同名稱的變數或函式 時，可以使用 namespace:: 來區分
-   [全域變數 vs 區域變數](./Class/scope_resolution_operator04.cpp)：如果區域變數遮蔽了全域變數，可以使用 :: 來存取全域變數

### 隱式轉換（Implicit Conversion）

-   C++ 支援 隱式轉換（Implicit Conversion），當不同型別的變數或物件相互操作時，編譯器會自動進行型別轉換，而不需要 static_cast<> 這類的顯式轉換。
-   會發生在以下類別

#### [基本型別轉換](./Class/built_in_type_conversation.cpp)：不會發生資料遺失

-   int → double
-   char → int
-   float → double

#### 類別建構函式（Constructor-based Conversion）

-   建構子可以無參數、一個參數或多個參數
-   當一個參數時，稱為單參數建構子（Single-Parameter Constructor），
-   [單參數建構子時，是允許隱式轉換的](./Class/constructor_based_conversation.cpp)
-   [這時候就要加 explicit 禁止隱式轉換](./Class/constructor_based_conversation_fix.cpp)

### 顯式轉換（Explicit Type Conversion）

-   顯式轉換（Explicit Conversion） 指的是當 C++ 不允許自動進行型別轉換 或 開發者想要強制轉換型別 時，使用 顯式轉換語法 來完成轉換。
-   C++ 提供四種主要的顯式轉換方式：
    -   [static_cast](./Class/static_cast.cpp)
    -   reinterpret_cast：這種轉換非常危險，因為它不檢查型別相容性，可能導致未定義行為（UB）
    -   const_cast：解除 const 限制
    -   dynamic_cast：
        -   它允許 父類指標安全地轉換為子類指標
        -   只能用在有虛擬函式（virtual）的類別

### 多形（Polymorphism）

-   多型（Polymorphism） 是指「相同的函式介面，不同的行為」，主要有兩種形式：
    -   編譯期多型（靜態綁定，Static Binding） → 函式多載、運算子多載
    -   執行期多型（動態綁定，Dynamic Binding） → 虛擬函數（virtual）、抽象類別

#### 靜態綁定（Static Binding）

-   靜態綁定（Static Binding） 是指編譯時期就決定要呼叫哪個函式，這種方式的函式在編譯時已經確定對應的函式位址，所以效率較高。
-   [函式多載（Function Overloading）](./Class/funtion_overloading.cpp)
-   [運算子多載（Operator Overloading）](./Class/operator_overloading.cpp)
-   [指標與多型](./Class/polymorphism_pointer.cpp)

#### 動態綁定（Dynamic Binding）與 虛擬函數

-   動態綁定（Dynamic Binding） 是指「函式在執行時才決定要調用哪個版本」，這是透過 虛擬函數（virtual function） 來實現的。
-   如果沒有 virtual，會發生[靜態繼承](./Class/overriding_error.cpp)
-   [使用 virtual](./Class/overriding_correct.cpp)
-   菱形問題（Diamond Problem）：當一個類別同時從兩個相同的基類繼承，C++ 會出現「菱形繼承問題（Diamond Problem）」，導致基類的成員變數與函式會有兩份拷貝。
-   [菱形繼承的問題](./Class/diamond_problem.cpp)
-   [處理菱形繼承的問題](./Class/diamond_problem_fix.cpp)

### 抽象類別（Abstract Class）

-   當類別內 至少有一個「純虛擬函式（pure virtual function）」，該類別就成為 抽象類別，無法直接建立物件。
-   [抽象類別](./Class/abstract01.cpp)

## Templates

-   泛型（Generic Programming）是一種讓程式碼可以適用於多種型別的技術
-   C++ 透過模板（Templates）實現泛型，主要有兩種形式：
    -   函式模板（Function Templates） → 適用於函式
    -   類別模板（Class Templates） → 適用於類別

### 函式模板（Function Template）

-   函式模板允許我們定義 「可以處理不同型別的函式」，而不用為每種型別都寫一個版本。
-   [計算兩個數的最大值](./Template/two_max.cpp)
-   [多個模板參數](./Template/multi_function_parameter.cpp)

### 類別模板（Class Templates）

-   類別模板允許我們建立「可以處理不同型別」的類別，適用於資料結構、泛型容器（如 vector、stack）。
-   [建立類別 Box 類別來存放不同型別的資料](./Template/template_box.cpp)
-   [多個類別模板參數](./Template/multi_class_parameter.cpp)
-   [類別模板提供預設值](./Template/default_paremeter.cpp)

<p align="center">
  Copyright © 2025 WEI-CHENG CHEN
</p>
