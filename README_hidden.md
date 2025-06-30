-   [成大工科 程式設計](./成大工科%20程式設計.md)
-   [LeetCode 練習清單](./LeetCode清單.md)

## 1. 章節

## 2. 字元

-   [計算字元大小](./Char/char_size.c)

### 2.1. 常用函數<ctype.h>

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

## 3. 字串

-   [字串就是字元陣列](./String/string_char_array.c)
-   [使用字元陣列模擬字元](./String/char_array_simulate_string.c)

### 3.1. 字元指標

-   [字元指標](./String/character_pointer.c)
-   [不同字串格式各有不同的記憶體空間](./String/different_string_format.c)

### 3.2. 字串函數

#### 3.2.1. strlen：計算字串長度

-   [strlen01](./String/strlen01.c)
-   [strlen02](./String/strlen02.c)

#### 3.2.2. strcat：連接字串 & strcpy：複製字串

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

#### 3.2.3. strncpy、strncat 第三個參數(處理緩衝區覆蓋，但要手動'\0')

```
char *strncpy(char *destination, *source, int i)
- 將source字串複製到destination字串，並回傳destination位址，限制複製i個字元
- 如果 source 的長度小於 n，strncpy 會用空字元 \0 填充到 n 的長度。
- 如果 source 的長度大於或等於 n，則 strncpy 不會自動在 destination 的結尾添加 \0。
```

#### 3.2.4. strcmp、strncmp 字串比較

```
int strcmp(char *string1, *string2);
int strncmp(char *string1, *string2, int n);
```

-   範例：12 生肖排序
    -   [12 生肖陣列排序](./String/ZodiacSort01.c)
    -   [12 生肖指標排序](./String/ZodiacSort02.c)

#### 3.2.5. strchr、strrchrr、strstr

```
char *strchr(char *string, char c); // 前往後找c，返回找到目標的地址
char *strrchr(char *string, char c); // 後往前找c，返回找到目標的地址
```

-   [strchr 將路徑中的每個子資料夾名稱抽出](./String/strchr.c)

```
char *strstr(char *string1, char *string2); 在string1中找string2，找到返回string2出現第址
```

-   [在 12 生肖中找有 er 字串的](./String/strstr.c)

#### 3.2.6. 切割字串：strtok

```
char *strtok(char *string, delimeters);
```

-   [切割字串](./String/strtok.c)

## 4. 宣告修飾

-   [輸出各整數類別位元小](./Basic%20Data%20Type/declaration_modifiers.c)
-   解決了不同平台上整數大小不一致的問題 => C99 跟 C++11
-   [C99 有號數](./Basic%20Data%20Type/c99_signed.c)：
-   [C99 無號數](./Basic%20Data%20Type/c99_unsigned.c)
-   [C++11 有號數](./Basic%20Data%20Type/c++11_signed.cpp)：
-   [C++11 無號數](./Basic%20Data%20Type/c++11_unsigned.cpp)：

### 4.1. 常數(const)

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

### 4.2. const 指標

```
int *ptrToInt = &i; ptrToInt 一個指向 int 型別變數的指標
const int *ptrToConstInt = &i; 一個指向 const int 型別變數 的指標(可以用*區分) => 不能透過指標修改目標變數的值，但可以改變指標的指向
int * const constPtrToInt = &i; 一個指向 int 的 常量指標 => 只能指向初始化時的地址，但可以透過指標修改目標變數的值
```

### 4.3. static

-   更改生命週期：從程式開始執行時初始化，一直存在於程式運行期間，直到程式結束才會被銷毀。
-   [static 範例](./Basic%20Data%20Type/static01.c)

## 5. 記憶體(未整理)

-   https://www.geeksforgeeks.org/dynamic-memory-allocation-in-c-using-malloc-calloc-free-and-realloc
-   https://www.geeksforgeeks.org/what-is-memory-leak-how-can-we-avoid/

## 6. 檔案處理

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

### 6.1. 以字元處理檔案

```c
int fget(FILE *p) // 讀取字元並回傳
int fput(int c, FILE *p) // 寫入(成功寫入的話也會回傳)
```

### 6.2. 重複讀取字元到 EOF

```c
while((c=fget(fp))!=EOF){

}
```

-   [文字覆蓋範例](./file/file01.c)
-   [文字添加範例](./file/file02.c)
-   [文字讀寫範例](./file/file03.c)

### 6.3. 以行處理檔案

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

### 6.4. 以格式處理檔案

```c
int fprintf(FILE *fp, const char *format, ...);
int fscanf(FILE *fp, const char *format, ...);
```

-   [使用 fprintf，fscanf 讀寫檔案](./file/file05.c)

### 6.5. 二進制檔案處理

-   [文字與二進制差別](./file/file06.c)

### 6.6. 緩衝區為主的輸出入

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

### 6.7. fseek 移動讀寫位置

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

### 6.8. EOF 測試

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

## 7. 動態記憶體配置

-   malloc：跟系統要記憶體
-   free：還系統記憶體

```c
#include <stdlib>
void *malloc(int size);
void free(void *ptr);
```

-   [跟系統要求一個 int 的記憶體空間](./dynamic%20memory/malloc01.c)
-   [跟系統要求一個結構的記憶體空間](./dynamic%20memory/malloc02.c)

## 8. LinkList(可以用力扣去說明)

-   節點概念

```c
typedef struct listNode{
    int data;
    struct listNode *next;
}ListNode;
```

-   [建立 listNode](./LinkList/create_node.c)
-   [遍歷 listNode](./LinkList/traverse_node.c)

## 9. 前置處理

### 9.1. #include

### 9.2. #define

-   在 C 語言中，#define 是一種預處理器指令，用來定義 宏（macro），可以用來替換數值、函數或表達式，提高程式碼的靈活性。

#### 9.2.1. define 定義常數

```c
#include <stdio.h>

#define PI 3.14159

int main() {
    printf("圓周率: %f\n", PI);
    return 0;
}

// PI 會在 編譯前 被替換成 3.14159，比 const double PI = 3.14159; 少了一點記憶體開銷
```

#### 9.2.2. define 定義函數

```c
#include <stdio.h>

#define SQUARE(x) ((x) * (x))

int main() {
    printf("5 的平方: %d\n", SQUARE(5));
    return 0;
}

// SQUARE(5) 會在編譯前被展開為 ((5) * (5))
// 不用真正呼叫函數，所以 比函數快
```

#### 9.2.3. define 的副作用

-   define 的問題在於它只是文本替換，沒有類型檢查，可能會產生預料外的錯誤。

##### 9.2.3.1. 運算優先順序問題

```c
#include <stdio.h>

#define SQUARE(x) x * x  // 沒有加括號

int main() {
    printf("5+1 的平方: %d\n", SQUARE(5 + 1));  // 期待是 36
    return 0;
}

// 輸出結果：11 (錯誤)

// 展開後的實際運算：
// 5 + 1 * 5 + 1  // 運算順序錯誤
// = 5 + 5 + 1
// = 11

// 解決方案：加上括號
// #define SQUARE(x) ((x) * (x))  // 確保優先運算順序
```

##### 9.2.3.2. 多次運算問題

```c
#include <stdio.h>

#define INCREMENT(x) (x + 1)

int main() {
    int a = 5;
    printf("INCREMENT(a) * 2 = %d\n", INCREMENT(a) * 2);
    return 0;
}

// 輸出結果：12 (錯誤)

// 展開後的樣子
// (a + 1 * 2)  // 運算順序錯誤
// = (a + 2)    // 變成 +2 而不是 *2

// 解決方案：
// #define INCREMENT(x) ((x) + 1)  // 確保運算順序正確
```

##### 9.2.3.3. 參數重複運算問題

```c
#include <stdio.h>

#define SQUARE(x) ((x) * (x))

int main() {
    int a = 5;
    printf("SQUARE(a++) = %d\n", SQUARE(a++));
    return 0;
}


// 問題：a++ 被計算了兩次
// SQUARE(a++) 會展開成 ((a++) * (a++))

// 解決方案：使用 inline 函數
inline int square(int x) {
    return x * x;
}
```

### 9.3. inline 函數

-   在 C（C99 及更新版本）和 C++ 中，inline 是一種函數修飾詞，用來建議編譯器將函數內聯（inline），以提高程式執行效率。
-   編譯器會將函數的程式碼直接展開到函數調用的位置，而不是跳轉到函數地址執行，減少函數呼叫的額外開銷（如壓入/彈出堆疊）。
-   如果函數很短，內聯函數可以提升程式效率，但如果函數很大，內聯可能會增加程式碼大小（Code Bloat），降低效能。

-   e.g. 使用 inline 做 max 函數(找最大值)

```c
#include <stdio.h>

// 定義 inline 函數
inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int x = 10, y = 20;
    printf("Max value: %d\n", max(x, y));  // 直接展開 max() 內容
    return 0;
}

// 當 max(x, y) 被呼叫時，編譯器會直接把 max 的程式碼 插入 main()，而不會真正執行函數呼叫。
// 這樣做可以減少函數調用的額外開銷（如壓入/彈出堆疊）
```

-   如果使用 define 也可以

```c
#include <stdio.h>

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    int x = 10, y = 20;
    printf("Max value: %d\n", MAX(x, y));
    return 0;
}

// #define 的問題
// 可能導致副作用：如果 MAX(a++, b++)，會發生兩次遞增，導致錯誤。
// 沒有類型檢查：MAX(3.5, 2) 可能導致浮點數誤用。
```

-   改用 inline

```c
#include <stdio.h>

inline int max(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    printf("Max value: %d\n", max(10, 20));
    return 0;
}
// 函數調用安全，不會有 #define 的副作用
// 有型別檢查
// 可讀性更好
```

### 9.4. 條件編譯(#if)

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

### 9.5. `__LINE__ __FILE__`

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

## 10. C standard library (stdlib)

### 10.1. 排序：qsort

```c
void qsort(void *base, int num, int size, int(*compare)(const void*, const void*))
```

-   [qsort](./Stdlib/qsort.c)
-   [qsort 排序日期](./Stdlib/qsort_date.c)
-   [qsort 排序字串陣列](./Stdlib/qsort_string.c)
-   [以 1 的個數做排序](./Stdlib/qsort_1bit.c)

### 10.2. 字串轉換函數：

```
atoi(const char *str)：string to int
atol(const char *str)：string to long
atof(const char *str)：string to float
strtol(const char *str, char **ptr, int base)：字串依照基底轉換為長整數
```

-   [字串轉數值](./Stdlib/stdlib_conversion.c)

### 10.3. 產生隨機數：

```c
#include <time.h>

void srand(unsigned int seed); // 設定隨機數產生器的種子
int rand(void); // 產生一個範圍在 0 到 RAND_MAX 之間的隨機整數
```

-   [隨機數](./Stdlib/rand.c)

## 11. C 語言的命令列參數（Command Line Arguments）

```
int main(int argc, char *argv[])
// argc：參數的個數（包含程式本身）
// *argv[]：參數的陣列
```

-   [列出命令列參數](./Command_Line_Arguments/print_command_line.c)
-   [轉換數值](./Command_Line_Arguments/command_line_change.c)
-   [使用 strtol() 處理進階數字轉換](./Command_Line_Arguments/command_line_strtol.c)

# CPP

## 1. 第一支 cpp 程式

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

### 1.1. 輸入輸出

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

### 1.2. 名稱空間（Namespace）

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

### 1.3. 操控子（Manipulator）

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

## 2. class

-   [建立類別](./Class/class_basic.cpp)
-   class vs. struct：
    -   struct 預設成員是 public
    -   class 預設成員是 private

### 2.1. 建構子

-   當 物件被創建時會自動執行，通常用來初始化物件的屬性。
-   [簡單建構子範例](./Class/Constructor01.cpp)
-   [初始化成員列表{}](./Class/init_member01.cpp)
-   [初始化成員列表:](./Class/init_member02.cpp)
-   [建構子多載](./Class/constructor_overloading.cpp)

### 2.2. 解構子（Destructor）

-   當 物件生命週期結束時，解構子會被自動呼叫，通常用來釋放動態記憶體（delete）、關閉檔案、釋放資源等。
-   不接受參數（不能多載）
-   沒有回傳值
-   當物件超出作用域時，自動呼叫
-   [基本解構子範例](./Class/basic_destructor.cpp)
-   [解構子釋放動態記憶體](./Class/basic_destructor_delete_memory.cpp)
-   [釋放動態陣列](./Class/delete_array.cpp)
-   [釋放動態物件](./Class/delete_object.cpp)

### 2.3. 繼承

-   [基本繼承範例](./Class/Inheritance01.cpp)
-   存取修飾詞（public / protected / private）
    -   public → public ✅ 可在類別內 & 外存取
    -   protected public → protected 🔒 只能在子類別內存取
    -   private public → private ❌ 只能在類別內部使用，子類別不能直接存取
    -   [存取修飾詞](./Class/public_protected_private.cpp)
-   [解構子在繼承中的行為](./Class/destructor_inheritance.cpp)

#### 2.3.1. override：確保函數正確覆寫

-   當子類別要覆寫（Override） 父類別的虛擬函數時，可以加上 override，讓編譯器檢查是否真的在覆寫，避免拼錯函數名稱或錯誤的函數簽名。
    -   [參數不同導致隱藏而非覆蓋](./Class/override_error.cpp)
    -   [使用 override 更正](./Class/override_fix.cpp)

#### 2.3.2. final：防止進一步覆寫或繼承

-   [防止子類別覆寫函數](./Class/final_function.cpp)
-   [防止類別被繼承](./Class/final_inheritance.cpp)

### 2.4. 作用域解析運算子(Scope Resolution Operator)(::)

-   用來 指定名稱的作用域（Scope），確保編譯器知道某個函式或變數屬於哪個類別或命名空間。
-   [類別成員函式的定義](./Class/scope_resolution_operator01.cpp)：當我們在類別外部定義成員函式時，必須使用 :: 來指定它的作用域
-   [靜態成員變數（Static Members）](./Class/scope_resolution_operator02.cpp)：靜態變數（static）屬於類別本身，而不是個別物件，所以需要 :: 來存取
-   [命名空間（Namespace）](./Class/scope_resolution_operator03.cpp)：當有 相同名稱的變數或函式 時，可以使用 namespace:: 來區分
-   [全域變數 vs 區域變數](./Class/scope_resolution_operator04.cpp)：如果區域變數遮蔽了全域變數，可以使用 :: 來存取全域變數

### 2.5. 隱式轉換（Implicit Conversion）

-   C++ 支援 隱式轉換（Implicit Conversion），當不同型別的變數或物件相互操作時，編譯器會自動進行型別轉換，而不需要 static_cast<> 這類的顯式轉換。
-   會發生在以下類別

#### 2.5.1. [基本型別轉換](./Class/built_in_type_conversation.cpp)：不會發生資料遺失

-   int → double
-   char → int
-   float → double

#### 2.5.2. 類別建構函式（Constructor-based Conversion）

-   建構子可以無參數、一個參數或多個參數
-   當一個參數時，稱為單參數建構子（Single-Parameter Constructor），
-   [單參數建構子時，是允許隱式轉換的](./Class/constructor_based_conversation.cpp)
-   [這時候就要加 explicit 禁止隱式轉換](./Class/constructor_based_conversation_fix.cpp)

### 2.6. 顯式轉換（Explicit Type Conversion）

-   顯式轉換（Explicit Conversion） 指的是當 C++ 不允許自動進行型別轉換 或 開發者想要強制轉換型別 時，使用 顯式轉換語法 來完成轉換。
-   C++ 提供四種主要的顯式轉換方式：
    -   [static_cast](./Class/static_cast.cpp)
    -   reinterpret_cast：這種轉換非常危險，因為它不檢查型別相容性，可能導致未定義行為（UB）
    -   const_cast：解除 const 限制
    -   dynamic_cast：
        -   它允許 父類指標安全地轉換為子類指標
        -   只能用在有虛擬函式（virtual）的類別

### 2.7. 多形（Polymorphism）

-   多型（Polymorphism） 是指「相同的函式介面，不同的行為」，主要有兩種形式：
    -   編譯期多型（靜態綁定，Static Binding） → 函式多載、運算子多載
    -   執行期多型（動態綁定，Dynamic Binding） → 虛擬函數（virtual）、抽象類別

#### 2.7.1. 靜態綁定（Static Binding）

-   靜態綁定（Static Binding） 是指編譯時期就決定要呼叫哪個函式，這種方式的函式在編譯時已經確定對應的函式位址，所以效率較高。
-   [函式多載（Function Overloading）](./Class/funtion_overloading.cpp)
-   [運算子多載（Operator Overloading）](./Class/operator_overloading.cpp)
-   [指標與多型](./Class/polymorphism_pointer.cpp)

#### 2.7.2. 動態綁定（Dynamic Binding）與 虛擬函數

-   動態綁定（Dynamic Binding） 是指「函式在執行時才決定要調用哪個版本」，這是透過 虛擬函數（virtual function） 來實現的。
-   如果沒有 virtual，會發生[靜態繼承](./Class/overriding_error.cpp)
-   [使用 virtual](./Class/overriding_correct.cpp)
-   菱形問題（Diamond Problem）：當一個類別同時從兩個相同的基類繼承，C++ 會出現「菱形繼承問題（Diamond Problem）」，導致基類的成員變數與函式會有兩份拷貝。
-   [菱形繼承的問題](./Class/diamond_problem.cpp)
-   [處理菱形繼承的問題](./Class/diamond_problem_fix.cpp)

### 2.8. 抽象類別（Abstract Class）

-   當類別內 至少有一個「純虛擬函式（pure virtual function）」，該類別就成為 抽象類別，無法直接建立物件。
-   [抽象類別](./Class/abstract01.cpp)

## 3. Templates

-   泛型（Generic Programming）是一種讓程式碼可以適用於多種型別的技術
-   C++ 透過模板（Templates）實現泛型，主要有兩種形式：
    -   函式模板（Function Templates） → 適用於函式
    -   類別模板（Class Templates） → 適用於類別

### 3.1. 函式模板（Function Template）

-   函式模板允許我們定義 「可以處理不同型別的函式」，而不用為每種型別都寫一個版本。
-   [計算兩個數的最大值](./Template/two_max.cpp)
-   [多個模板參數](./Template/multi_function_parameter.cpp)

### 3.2. 類別模板（Class Templates）

-   類別模板允許我們建立「可以處理不同型別」的類別，適用於資料結構、泛型容器（如 vector、stack）。
-   [建立類別 Box 類別來存放不同型別的資料](./Template/template_box.cpp)
-   [多個類別模板參數](./Template/multi_class_parameter.cpp)
-   [類別模板提供預設值](./Template/default_paremeter.cpp)

---

<p align="center">
  Copyright © 2025 Wei-Cheng Chen
</p>
