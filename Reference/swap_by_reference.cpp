#include <iostream> 
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(void){
    int i=2, j=4;
    cout << "i = " << i << " j = " << j << endl;
    swap(i, j);
    cout << "i = " << i << " j = " << j << endl;
    return 0;
}

// i = 2 j = 4
// i = 4 j = 2