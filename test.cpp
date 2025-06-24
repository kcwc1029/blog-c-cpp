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