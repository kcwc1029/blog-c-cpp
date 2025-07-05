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



