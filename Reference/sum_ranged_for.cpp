#include <iostream>
using namespace std;
#define N 6

int main(){
    int keys[] = {3,4,6,2,8,10};
    int sum = 0;
    for(int &v : keys){
        sum += v;
    }
    cout << sum << endl; // 33
    return 0;
}