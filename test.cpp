#include <iostream>
using namespace std;

main(){
    int change;
    cin >> change;
    int fifty {change / 50};
    change = change - fifty * 50;
    int ten {change / 10};
    change = change - ten * 10;
    int five {change / 5};
    change = change - five * 5;
    int one {change};

    cout << fifty << endl;
    cout << ten << endl; 
    cout << five << endl;
    cout << one << endl;
}