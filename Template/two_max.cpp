#include <iostream>
using namespace std;

// ✅ 定義函式模板
template <typename T>  // `T` 是泛型型別
T getMax(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    cout << getMax(10, 20) << endl;   // ✅ 傳入 `int`
    cout << getMax(3.5, 2.1) << endl; // ✅ 傳入 `double`
    cout << getMax('A', 'Z') << endl; // ✅ 傳入 `char`
    // C++ 會自動推導模板型別，但我們也可以手動指定
    cout << getMax<int>(5, 10) << endl;     // ✅ 指定 `T = int`
    cout << getMax<double>(5.5, 2.1) << endl; // ✅ 指定 `T = double`
    return 0;
}
