#include <iostream>
using namespace std;

template <typename T>
void mySwap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main(){
    int x = 10, y = 20;
    string a = "1", b = "2";
    mySwap(x, y);
    mySwap(a, b);
    cout << x << " " << y << endl;
    cout << a << " " << b << endl;
}