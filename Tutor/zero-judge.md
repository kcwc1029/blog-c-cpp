## 1. 目錄

-   [a001. 哈囉(講解)](./zero-judge.md)
-   ~~a002. 簡易加法(HW)~~
-   ~~a003. 兩光法師占卜術(HW)~~
-   ~~a004. 文文的求婚(HW)~~
-   a005. Eva 的回家作業(講解)
-   a006. 一元二次方程式(HW)
-   a009. 解碼器(HW)
-   a010. 因數分解(HW)
-   a020. 身分證檢驗(講解)
-   a022. 迴文(HW)
-   a024. 最大公因數(GCD)(講解)
-   a034. 二進位制轉換(講解)
-   a038. 數字翻轉(HW)
-   a040. 阿姆斯壯數(HW)
-   a053. Sagit's 計分程式(HW)
-   a054. 電話客服中心(HW)

### 1.1. a001. 哈囉

{% raw %}

```cpp
#include <iostream>
using namespace std;

main(){
    string s = "";
    cin >> s;
    cout << "hello, " << s << endl;
}
```

{% endraw %}

### 1.2. a003. 兩光法師占卜術

{% raw %}

```cpp
#include <iostream>
using namespace std;

int main() {
    int month, day;
    cin >> month >> day;

    int S = (month * 2 + day) % 3;

    if (S == 0) cout << "普通";
    else if (S == 1) cout << "吉";
    else cout << "大吉";

    return 0;
}
```

{% endraw %}

### 1.3. a004. 文文的求婚

{% raw %}

```cpp
#include <iostream>
using namespace std;

int main() {
    int year;
    while (cin >> year) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            cout << "閏年" << endl;
        else
            cout << "平年" << endl;
    }
    return 0;
}
```

{% endraw %}

### 1.4. a005. Eva 的回家作業

說明：給一定個陣列，已知前四項，推估出第 5 向(等比或等差)

舉例來說：`20 = 2^2 * 5` => 可以拆成【因數】跟【次方】

{% raw %}

```cpp
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int A[4];
        for(int j=0;j<4;j++)
            cin>>A[j];
        if(A[3]-A[2]==A[2]-A[1])
            cout<<A[0]<<" "<<A[1]<<" "<<A[2]<<" "<<A[3]<<" "<<A[3]+(A[3]-A[2])<<endl;
        else if(A[3]/A[2]==A[2]/A[1])
            cout<<A[0]<<" "<<A[1]<<" "<<A[2]<<" "<<A[3]<<" "<<int(A[3]*A[3]/A[2])<<endl;
    }

    return 0;
}
```

{% endraw %}

### 1.5. a010. 因數分解

{% raw %}

```cpp
#include <iostream>
using namespace std;

int main() {
    int num;
    while (cin >> num) {
        bool first = true; // 用來判斷是否為第一個輸出項目，避免前面多印 " * "

        // 開始從 2 開始試除，直到 i*i > num 為止（因為更大的因數會配對在前面出現過了）
        for (int i = 2; i * i <= num; ++i) {
            int count = 0; // 計算質因數 i 的次方數
            while (num % i == 0) {
                num /= i;    // 不斷將 num 除以 i
                count++;     // 計數次方
            }

            // 若 i 是一個有效的質因數
            if (count > 0) {
                if (!first) cout << " * "; // 如果不是第一項，就先輸出乘號
                first = false; // 之後的項目就不再是第一項了

                // 輸出格式：
                if (count == 1) cout << i; // 若次方為 1，就只輸出 i
                else cout << i << "^" << count; // 否則輸出 i 的次方格式
            }
        }

        // 如果最後剩下的 num > 1，代表它本身也是一個質因數
        if (num > 1) {
            if (!first) cout << " * "; // 若不是第一項，先補乘號
            cout << num;               // 輸出這個質因數
        }
        cout << endl; // 換行，開始處理下一筆輸入
    }
    return 0;
}
```

{% endraw %}

### 1.6. a020. 身分證檢驗

說明：身分證號碼檢查如下：(假設是 T112663836)

-   最左邊英文轉數字 => T 轉成 27 => 身份證字號變成 27 112663836

{% raw %}

```cpp
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    // 建立英文字母對應的代碼表（參考身分證英文字母規則）
    map<char, int> letterMap = {
        {'A', 10}, {'B', 11}, {'C', 12}, {'D', 13}, {'E', 14},
        {'F', 15}, {'G', 16}, {'H', 17}, {'I', 34}, {'J', 18},
        {'K', 19}, {'L', 20}, {'M', 21}, {'N', 22}, {'O', 35},
        {'P', 23}, {'Q', 24}, {'R', 25}, {'S', 26}, {'T', 27},
        {'U', 28}, {'V', 29}, {'W', 32}, {'X', 30}, {'Y', 31}, {'Z', 33}
    };

    string id;
    while (cin >> id) {


        int code = letterMap[id[0]]; // 英文字母對應的兩位數代碼
        int sum = (code / 10) * 1 + (code % 10) * 9;

        ///// 依權重 8~1 計算後面 8 碼 /////
        int weight = 8;
        for (int i = 1;i<8+1; i++) {
            sum += (id[i] - '0') * weight;
            weight--;
        }

        sum += (id[9] - '0'); // 最後一位直接加

        if (sum % 10 == 0)
            cout << "real" << endl;
        else
            cout << "fake" << endl;
    }

    return 0;
}

```

{% endraw %}

### 1.7. a024. 最大公因數(GCD)

找出最大公因數 => 輾轉相除法

```
GCD(12, 15)
→ GCD(15, 12)      // 先交換
→ GCD(12, 3)       // 15 % 12 = 3
→ GCD(3, 0)        // 12 % 3 = 0
→ 結果是 3

→ GCD(a, b) = GCD(b, a % b)
```

{% raw %}

```cpp
// 解法01：用迴圈的角度
#include <iostream>
#include <string>
using namespace std;

int main() {
    int a, b;
    while (cin >> a >> b) {
        while(a%b!=0){
            int k = a%b;
            a = b;
            b = k;
        }
        cout << b << endl;
    }
}

```

{% endraw %}

{% raw %}

```cpp
// 解法02：用遞迴的角度
#include <iostream>
using namespace std;

// 計算最大公因數（遞迴版）
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int main() {
    int a, b;
    while (cin >> a >> b) {
        cout << gcd(a, b) << endl;
    }
    return 0;
}

```

{% endraw %}

### 1.8. a034. 二進位制轉換

將 10 進為轉成 2 進位

我們先模擬一遍

```
6 ÷ 2 = 3 ... 0
3 ÷ 2 = 1 ... 1
1 ÷ 2 = 0 ... 1
餘數反過來 => 110
```

{% raw %}

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    int num;
    while (cin >> num) {
        string ans = "";
        while (num > 0) {
            // ans += num % 2 + '0';
            char bit = char(num % 2 + '0');
            ans = bit + ans;

            num /= 2;
        }
        cout << ans << endl;
    }
}
```

{% endraw %}

### a058. MOD3

一行輸出三個整數（空格分開），依序是：

-   `mod 3 == 0` 的個數
-   `mod 3 == 1` 的個數
-   `mod 3 == 2` 的個數

{% raw %}

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int count0 = 0; // 3 的倍數
    int count1 = 0; // 餘 1
    int count2 = 0; // 餘 2

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x % 3 == 0)
            count0++;
        else if (x % 3 == 1)
            count1++;
        else
            count2++;
    }

    cout << count0 << " " << count1 << " " << count2 << endl;
    return 0;
}
```

{% endraw %}

### 1.9. a059. 完全平方和

給你一個範圍 a 到 b ，請你找出 a 與 b 之間所有完全平方數的和。

e.g. 範圍 3-25，表示 3 至 25 中所有完全平方數的和就是 4 + 9 + 16 + 25 = 54 。

{% raw %}

```cpp
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int caseNum = 1; caseNum <= T; ++caseNum) {
        int a, b, sum = 0;
        cin >> a >> b;

        ///// 從 sqrt(a) 到 sqrt(b) 中的整數，檢查平方數 /////
        int start = ceil(sqrt(a));
        int end = floor(sqrt(b));
        for (int i = start; i <= end; ++i) {
            sum += i * i;
        }
        cout << "Case " << caseNum << ": " << sum << endl;
    }
    return 0;
}
```

{% endraw %}

### a065. 提款卡密碼

{% raw %}

```cpp
#include <iostream>
#include <cmath>    // for abs()
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 1; i < 7; i++) {
        int prev = s[i - 1] - 'A'; // 把字母轉成順序值
        int curr = s[i] - 'A';
        cout << abs(curr - prev);
    }
    cout << endl;
    return 0;
}
```

{% endraw %}

### 1.10. a104. 排序

這一題可以去延伸演算法中的排序相關演算法，這邊先示範比較基礎的

未來我們可以在【演算法】中去討論

#### 1.10.1. 解法 01：用 bubble sort 去解

Bubble Sort：重複走訪數列，每次比較相鄰兩個元素，如果順序錯了就交換，最大的值會被「冒」到後面，像泡泡往上浮。

補充：

-   https://magiclen.org/bubble-sort/
-   https://www.youtube.com/watch?v=Dv4qLJcxus8

邏輯 code：

-   外圈：0 到 n-1 => 因為我們最多需要做 n-1 輪冒泡（最後一輪就不需要再比了）
-   內圈：0 到 n-1-i：
    -   每一輪會把目前剩下最大值移到尾端，因此第 i 輪後，最後 i 個元素已經排好不用再比。所以這一輪最多只需要比較到 n - 1 - i 的位置

{% raw %}

```cpp
// 要排列的陣列
void bubbleSort(int arr[], int n) {
    // 外圈：要排序的回合數
    for (int i = 0; i < n - 1; i++) {
        // 內圈：每一回合交換的過程
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // 交換相鄰元素
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
```

{% endraw %}

完整解法：

{% raw %}

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int arr[1000];

        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        // 冒泡排序
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n - 1 - i; ++j) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);
                }
            }
        }

        // 輸出結果
        for (int i = 0; i < n; ++i) {
            if (i > 0) cout << " ";
            cout << arr[i];
        }
        cout << "\n";
    }
    return 0;
}
```

{% endraw %}

#### 1.10.2. 解法 02：用 insert sort 去解

就像打撲克牌時整理手牌：每次將新牌插入前面已排序的牌堆中。

補充：

-   https://www.youtube.com/watch?v=DfloPvgptJA
-   https://magiclen.org/insertion-sort/

假設你要排序的陣列是 `arr = [7, 4, 5, 2]`

1. 第一回合：i = 1，key = 4
    - 比較 `arr[0]` = 7 和 key = 4，因為 7 > 4 → 把 7 往右移
2. 第二回合：i = 2，key = 5
    - 比較 7 > 5 → 移動
    - 比較 4 < 5 → 停止
    - 插入 5 → `arr = [4, 5, 7, 2]`
3. 第三回合：i = 3，key = 2
    - 7 > 2 → 移動
    - 5 > 2 → 移動
    - 4 > 2 → 移動
    - 插入 2 → `arr = [2, 4, 5, 7]`

邏輯 code：

{% raw %}

```cpp
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];       // 目前要插入的數字

		// 開始排序
        int j = i - 1;
        while (j >= 0 && arr[j] > key) { // 將比 key 大的元素向右移動
            arr[j + 1] = arr[j]; // 把較大的數往後移
            j--;
        }

        // 把 key 插入正確位置
        arr[j + 1] = key;
    }
}
```

{% endraw %}

完整解法：

{% raw %}

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int arr[1001];

        // 讀入資料
        for (int i = 0; i < n; ++i) {
            cin >> arr[i];
        }

        // 插入排序
        for (int i = 1; i < n; ++i) {
            int key = arr[i]; // 將目前這個元素「暫存」起來
            int j = i - 1; // 從已排序區的最後一個元素開始往左比
            while (j >= 0 && arr[j] > key) {
                arr[j + 1] = arr[j]; // 如果前一個元素比較大，就往右移
                j--;
            }
            arr[j + 1] = key; // 將 key 放入正確位置（空出來的位置）
        }

        // 輸出結果
        for (int i = 0; i < n; ++i) {
            if (i > 0) cout << " ";
            cout << arr[i];
        }
        cout << "\n";
    }
    return 0;
}
```

{% endraw %}

其餘還有 merge sort、quick sort .etc

### 1.11. a121. 質數又來囉

針對每組輸入的區間 `[a, b]`（保證 b−a ≤ 1000）計算範圍內的質數個數。

{% raw %}

```cpp
#include <iostream>
#include <cmath>
using namespace std;

// 判斷一個數是否為質數
bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i < sqrt(n)+1; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    while (cin >> a >> b) {
        int count = 0;
        for (int i = a; i <= b; ++i) {
            if (isPrime(i)) count++;
        }
        cout << count << endl;
    }
    return 0;
}
```

{% endraw %}

### a147. Print it all

會有多組整數 n，每組一行

每次 n 表示要輸出「所有小於 n 且不能被 7 整除的正整數」

{% raw %}

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        for (int i = 1; i < n; i++) {
            if (i % 7 != 0) {
                cout << i;
                if (i != n - 1) cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
```

{% endraw %}

### a148. You Cannot Pass?!

{% raw %}

```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    while (cin >> n && n != 0) {
        int sum = 0, score;
        for (int i = 0; i < n; i++) {
            cin >> score;
            sum += score;
        }
        double avg = sum * 1.0 / n; // 避免整數除法(重要)
        if (avg > 59)
            cout << "no" << endl;
        else
            cout << "yes" << endl;
    }
    return 0;
}
```

{% endraw %}

### a149. 乘乘樂

{% raw %}

```cpp
#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        string num;
        cin >> num;

        int product = 1;
        for (char digit : num) {
            product *= (digit - '0');
        }

        cout << product << endl;
    }

    return 0;
}
```

{% endraw %}

<!-- ---

<p align="center">
  Copyright © 2025 Wei-Cheng Chen
</p>

-->
