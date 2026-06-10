#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int cnt = a + b + c + d;

        if (cnt == 0) cout << 0 << "\n";
        else if (cnt == 4) cout << 2 << "\n";
        else cout << 1 << "\n";
    }
    return 0;
}