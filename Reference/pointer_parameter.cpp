#include <iostream> 
using namespace std;

void pointerInc(double *p1, double *p2){
    cout << "The address of p1 is " << &p1 << endl;
    cout << "The value of p1 is " << p1 << endl;
    cout << "The address of p2 is " << &p2 << endl;
    cout << "The value of p2 is " << p2 << endl;
    *p1 += 1;
    p1 = p2;
    *p1 += 2;
    cout << "The value of p1 is now " << p1 << endl;
}

int main(void){
    double i=2, j=4;
    double *iptr = &i;
    
    cout << "The address of i is " << &i << endl;
    cout << "The value of i is " << i << endl;
  
    cout << "The address of j is " << &j << endl;
    cout << "The value of j is " << j << endl;
  
    cout << "The address of iptr is "<< &iptr << endl;
    cout << "The value of iptr is "<< iptr << endl;
  
    pointerInc(iptr, &j);
  
    cout << "after pointerInc " << endl;
    cout << "The value of i is " << i << endl;
    cout << "The value of j is " << j << endl;
    
    *iptr += 5;
  
    cout << "after *iptr += 5" << endl;
    cout << "The address of iptr is "<< &iptr << endl;
    cout << "The value of iptr is "<< iptr << endl;
    cout << "The value of i is " << i << endl;
    cout << "The value of j is " << j << endl;
    return 0;
}

// The address of i is 0x61ff08
// The value of i is 2
// The address of j is 0x61ff00
// The value of j is 4
// The address of iptr is 0x61fefc
// The value of iptr is 0x61ff08
// The address of p1 is 0x61fed0
// The value of p1 is 0x61ff08
// The address of p2 is 0x61fed4
// The value of p2 is 0x61ff00
// The value of p1 is now 0x61ff00
// after pointerInc
// The value of i is 3
// The value of j is 6
// after *iptr += 5
// The address of iptr is 0x61fefc
// The value of iptr is 0x61ff08
// The value of i is 8
// The value of j is 6