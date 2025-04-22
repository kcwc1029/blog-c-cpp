## static

-   static 控制 變數或函式的生命週期 和 可見範圍（作用域）。

### Lab： 用途 01：記住變數值

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

### Lab：用途 02：限制作用範圍（封裝）

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

### Lab：用途 03：靜態函式（static function）：只在本檔案可用

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

### Lab：用途 04：class 成員 static（C++ only）

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
