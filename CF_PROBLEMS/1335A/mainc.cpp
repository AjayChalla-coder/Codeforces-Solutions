#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--)
    {
        long long n; cin >> n;
        int ans = max(0LL, (n-1)/2);
        cout << ans << "\n";
    }
    return 0;
}