#include <iostream>
using namespace std;

class Integer {
public:
    int value;
    // ✅ 初始化列表，直接初始化變數
    Integer(int v) : value(v) {}
};
    
int main(){
    Integer intt(12);
    cout << intt.value << endl;
}
    