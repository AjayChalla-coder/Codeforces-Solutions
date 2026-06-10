#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    int k;
    cin >> n >> k;

    while(k--)
    {
        if(n%10!=0) n--;
        else n/=10;
    }
    cout << n << "\n";
    return 0;
}