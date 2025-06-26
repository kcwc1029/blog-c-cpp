#include <iostream>
#include <cmath>
using namespace std;

// 判斷一個數是否為質數
bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i < sqrt(n)+1; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    while (cin >> a >> b) {
        int count = 0;
        for (int i = a; i <= b; ++i) {
            if (isPrime(i)) count++;
        }
        cout << count << endl;
    }
    return 0;
}