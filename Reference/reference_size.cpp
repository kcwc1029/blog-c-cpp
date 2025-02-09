#include <iostream>
using namespace std;

int main() {
    int i = 255;
    int &iref = i;
    float f;
    float &fref = f;
    double d;
    double &dref = d;
    cout << "sizeof(iref) = " << sizeof(iref) << endl;
    cout << "sizeof(fref) = " << sizeof(fref) << endl;
    cout << "sizeof(dref) = " << sizeof(dref) << endl;
    return 0;
}

// 輸出
// sizeof(iref) = 4
// sizeof(fref) = 4
// sizeof(dref) = 8