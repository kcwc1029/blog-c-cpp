#include <iostream>
using namespace std;

// 此巨集用於除錯，若條件不符就輸出錯誤並結束程式
#define assert(cond) \
    if (!(cond)) { \
        cout << "Assertion failed: " << #cond << " " \
             << "file " << __FILE__ << " line " << __LINE__ << endl; \
        exit(0); \
    }

int main(void) {
    int i = 0;
    assert(i == 1);  // 輸出：Assertion failed: i == 1
    return 0;
}