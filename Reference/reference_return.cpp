#include <iostream> 
using namespace std;

int &firstPositive(int *ptr){
    while (*ptr <= 0){
        ptr++;
    }
    return *ptr; // 回傳的是 ptr 指向的變數的「引用（Reference）」，所以這個變數仍然受後續操作影響。
}

int main(void){
    int array[] {0, 0, 3, 0, 5, 0, 0, 10};
    int &iref = firstPositive(array);
    cout << "iref = " << iref << endl; // 3
    iref = 0; // 將array 3改成0

    int i = firstPositive(array);
    cout << "i = " << i << endl;
    i = 0; //  並不會跟改array的5歐
    cout << "array[4] = " << array[4] << endl;

    i = firstPositive(array);
    cout << "i = " << i << endl;

    firstPositive(array) = 0;

    i = firstPositive(array);
    cout << "i = " << i << endl;
    iref = 7;

    i = firstPositive(array);
    cout << "i = " << i << endl;
    (*(&iref - 1))++;

    i = firstPositive(array);
    cout << "i = " << i << endl;
    return 0;
}

// iref = 3
// i = 5
// array[4] = 5
// i = 5
// i = 10
// i = 7
// i = 1
