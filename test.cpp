#include <iostream>
#include <cmath>
// #include <string>
// #include <algorithm>

using namespace std;

int main() {
    int n; // ???
    cin >> n; // 2
    for(int i=0;i<n;i++){
        int a, b;
        int ans = 0;
        cin >> a;
        cin >> b;
        // int sa = sqrt(a); 
        // int sb = sqrt(b);
        int sa = ceil(sqrt(a));
        int sb = floor(sqrt(b));
        for(int i=sa;i<=sb;i++){
            ans += i * i;
        }
        
        cout << "Case " << i+1 << ": " << ans << "\n";
    }
}

