### 0.1. Lab：實作 abs

```c
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, k, max;
    scanf("%d%d%d", &i, &j, &k);
    if (i > 0){
        k = i;
    }else{
        k = -i;
    }
    printf("%d\n", k);
}
```

### 0.2. Lab：實作三者最大值

```c
#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, j, k, max;
    scanf("%d%d%d", &i, &j, &k);
    if (i > j){
        max = i;
    }else{
        max = j;
    }
    if (k > max){
        max = k;
    }
    printf("%d\n", max);
}
```

### 0.3. Lab：閏年判斷

```c
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> // bool

int main(){
    int year;
    printf("請輸入年分");
    scanf("%d", &year);
    bool leapYear;
    if (year % 400 == 0){
        leapYear = true;
    }else if ((year % 4 == 0) && (year % 100 != 0)){
        leapYear = true;
    }else{
        leapYear = false;
    }
    printf("%d\n", leapYear);
}
```

### 0.4. Lab：四則運算

```c
// TODO:  輸入三個參數：被加數、加數、規則
// 0：加法
// 1：減法
// 2：乘法
// 3：除法
#include <stdio.h>
#include <stdlib.h>

#define ADD 0
#define SUB 1
#define MUL 2
#define DIV 3
#define MOD 4

int main() {
    int a, b, c, d; // a 和 b 是操作數，c 是運算符，d 是結果
    printf("請輸入兩個整數和運算符（0:加法, 1:減法, 2:乘法, 3:除法, 4:取餘數）：\n");
    scanf("%d%d%d", &a, &b, &c);

    switch (c) {
        case ADD:
            d = a + b;
            printf("結果: %d\n", d);
            break;
        case SUB:
            d = a - b;
            printf("結果: %d\n", d);
            break;
        case MUL:
            d = a * b;
            printf("結果: %d\n", d);
            break;
        case DIV:
            if (b == 0) {
                printf("錯誤: 除數不能為零\n");
            } else {
                d = a / b;
                printf("結果: %d\n", d);
            }
            break;
        case MOD: // 取餘數
            if (b == 0) { // 處理除以零的情況
                printf("錯誤: 除數不能為零\n");
            } else {
                d = a % b;
                printf("結果: %d\n", d);
            }
            break;
        default: // 無效的運算符
            printf("錯誤: 無效的運算符\n");
            break;
    }

    return 0;
}
```
