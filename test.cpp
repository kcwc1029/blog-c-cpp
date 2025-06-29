#include <iostream>
using namespace std;

// 宣告 inline 函式
inline int square(int x) {
    return x * x;
}

int main() {
    int n = 5;
    int result = square(n);  // 這裡會被展開成：n * n
    cout << "平方是：" << result << endl;
    return 0;
}
