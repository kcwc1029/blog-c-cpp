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

## 16. pointer

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
