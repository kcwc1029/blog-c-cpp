#include <iostream>
using namespace std;

int main() {
    int i = 5, j;
    int &ref1 = i;
    int &ref2 = ref1;
    cout << "i = " << i << endl;
    cout << "&i = " << &i << endl;
    cout << "&j = " << &j << endl;
    cout << "ref1 = " << ref1 << endl;
    cout << "&ref1 = " << &ref1 << endl;
    cout << "ref2 = " << ref2 << endl;
    cout << "&ref2 = " << &ref2 << endl;
    ref1 = 8;
    cout << "i = " << i << endl;
    j = ref2 + 3;
    cout << "j = " << j << endl;
    return 0;
}

// 輸出
// i = 5
// &i = 0x61ff04
// &j = 0x61ff00
// ref1 = 5
// &ref1 = 0x61ff04
// ref2 = 5
// &ref2 = 0x61ff04
// i = 8
// j = 11