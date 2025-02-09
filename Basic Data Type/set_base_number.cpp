#include <iostream>
using namespace std;

int main() {
    int num = 255;
    cout << "十進位: " << dec << num << endl;
    cout << "八進位: " << oct << num << endl;
    cout << "十六進位: " << hex << num << endl;
    return 0;
}

// 輸出
// 十進位: 255
// 八進位: 377
// 十六進位: ff