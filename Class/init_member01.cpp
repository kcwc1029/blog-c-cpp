#include <iostream>
using namespace std;

class Integer {
public:
    int value;
    // ❌ 這種方式會先建構 `value`，然後再賦值
    Integer(int v) {  
        value = v;  // 先建構 `value`，再賦值
    }
};
    
int main(){
    Integer intt(12);
    cout << intt.value << endl;
}
    