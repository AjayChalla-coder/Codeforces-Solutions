#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    if (!(cin >> t)) return 0;

    while (t--) 
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b && b < c) 
        {
            cout << "STAIR\n";
        }
        else if (a < b && b > c) 
        {
            cout << "PEAK\n";
        }
        else 
        {
            cout << "NONE\n";
        }
    }
    return 0;
}