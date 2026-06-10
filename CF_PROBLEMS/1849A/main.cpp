#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int b, c, h;
        cin >> b >> c >> h;
        int fillings = c + h;
        int k = min(fillings, b - 1);
        cout << 2*k+1 << "\n";
    }
}