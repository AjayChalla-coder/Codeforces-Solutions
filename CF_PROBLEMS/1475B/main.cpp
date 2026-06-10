#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long k = n / 2020;
        long long r = n % 2020;
        if (r <= k)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}