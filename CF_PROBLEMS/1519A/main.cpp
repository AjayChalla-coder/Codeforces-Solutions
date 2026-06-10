#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        long long r, b, d;
        cin >> r >> b >> d;

        long long big = max(r, b);
        long long small = min(r, b);

        if(big <= small * (d + 1))
        {
            cout << "YES" << "\n";
        }
        else 
        {
            cout << "NO" << "\n";
        }
    }
    return 0;
}