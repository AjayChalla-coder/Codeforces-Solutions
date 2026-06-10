#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b, c, n;
        cin >> a >> b >> c >> n;
        long long sum = a+b+c+n;
        if(sum%3 != 0)
        {
            cout << "NO\n";
            continue;
        }
        long long x = sum/3;
        if(x < max({a, b, c}))
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
}