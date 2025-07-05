#include <iostream>
using namespace std;

template <typename T>
class ArrayPrinter{
public:
    void print(T arr[], int size) {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};


int main(){
    ArrayPrinter<int> printer1;
    int arr1[] = {1, 2, 3, 4, 5};
    printer1.print(arr1, 5);

    ArrayPrinter<string> printer2;
    string arr2[] = {"蘋果", "香蕉", "葡萄"};
    printer2.print(arr2, 3);
    return 0;
}