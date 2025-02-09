#include <iostream>
using namespace std;

template <typename T1, typename T2>
void print(T1 a, T2 b) {
    cout << "a: " << a << ", b: " << b << endl;
}

int main() {
    print(10, 3.5);   // `T1 = int, T2 = double`
    print('A', "Hello"); // `T1 = char, T2 = const char*`
    return 0;
}