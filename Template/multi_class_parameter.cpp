#include <iostream>
using namespace std;

template <typename T1, typename T2>
class Pair{
private:
    T1 first;
    T2 second;
public:
    Pair(T1 a, T2 b): first(a), second(b) {}
    void show() {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};


int main() {
    Pair<int, double> p1(10, 3.14);
    Pair<string, char> p2("Alice", 'A');
    p1.show();
    p2.show();
    return 0;
}

// First: 10, Second: 3.14
// First: Alice, Second: A