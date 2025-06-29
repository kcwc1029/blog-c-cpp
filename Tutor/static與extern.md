## static

static 關鍵字用來控制

-   變數或函式的生命週期（lifetime）
-   變數或函式的可見範圍（scope）

### 範例：記住函式中的變數值（區域 static）

普通區域變數在函式結束後會消失；而 static 區域變數只初始化一次，會保留值到程式結束。

{% raw %}

```cpp
#include <iostream>
using namespace std;

void counter() {
    static int count = 0; // 初始化一次，不會每次重新設為 0
    count++;
    cout << "Count: " << count << endl;
}

int main() {
    counter(); // Count: 1
    counter(); // Count: 2
    counter(); // Count: 3
    return 0;
}

```

{% endraw %}

### 範例：變數封裝（檔案內可見）

使用 static 修飾的全域變數，只能在該檔案內使用，有助於「模組封裝」

{% raw %}

```cpp
// utils.cpp
#include <iostream>
using namespace std;

static int sensorValue = 0; // 只在這個檔案內部可見

void readSensor() {
    sensorValue++;
    cout << "Sensor value: " << sensorValue << endl;
}

```

{% endraw %}

{% raw %}

```cpp
// main.cpp
// extern int sensorValue; ❌ 錯誤：因為 sensorValue 是 static，外部不可見

extern void readSensor();

int main() {
    readSensor(); // Sensor value: 1
    readSensor(); // Sensor value: 2
    return 0;
}

```

{% endraw %}

### 範例：函式封裝（static 函式）

static 函式只能在該檔案中使用，通常用來避免名稱衝突與限制存取。

{% raw %}

```cpp
// math_utils.cpp
#include <iostream>
using namespace std;

static int add(int a, int b) { // 只能在本檔案使用
    return a + b;
}

void printSum(int x, int y) {
    cout << "Sum = " << add(x, y) << endl;
}

```

{% endraw %}

{% raw %}

```cpp
// main.cpp
// extern int add(int, int); ❌ 錯誤，add 是 static

extern void printSum(int, int);

int main() {
    printSum(3, 4); // Sum = 7
    return 0;
}

```

{% endraw %}

### 範例：類別中的 static 成員變數

static 成員變數屬於整個類別，不屬於某個物件

常用來計算物件數量、共享資源等

{% raw %}

```cpp
#include <iostream>
using namespace std;

class MyClass {
public:
    static int count; // 所有物件共享一份資料

    MyClass() {
        count++;
    }

    void showCount() {
        cout << "Count: " << count << endl;
    }
};

// 類別外定義 static 成員變數
int MyClass::count = 0;

int main() {
    MyClass a, b, c;
    c.showCount(); // Count: 3
    return 0;
}

```

{% endraw %}

## extern

跨檔案變數共享

extern 告訴編譯器：變數的定義在其他地方（通常在其他 .cpp 檔案中）。

常用於模組間共享變數或函式。

### 範例：跨檔案變數共享：使用 extern

{% raw %}

```cpp
// global.cpp
int counter = 42;  // 實際定義變數

```

{% endraw %}

{% raw %}

```cpp
// main.cpp
#include <iostream>
using namespace std;

extern int counter;  // 告訴編譯器：變數定義在別處

int main() {
    cout << "Counter = " << counter << endl; // Counter = 42
    return 0;
}
```

{% endraw %}
