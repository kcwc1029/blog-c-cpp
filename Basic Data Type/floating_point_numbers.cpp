#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 3.1415926535;
    cout << "預設精度: " << pi << endl;
    cout << "精度 3: " << setprecision(3) << pi << endl;
    cout << "精度 5: " << setprecision(5) << pi << endl;
    return 0;
}