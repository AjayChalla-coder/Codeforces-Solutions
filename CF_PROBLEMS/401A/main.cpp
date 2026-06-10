#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    int n, x;
    cin >> n >> x;
    ll sum = 0;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        sum += a;
    }
    sum = abs(sum);
    long long ans = (sum + x - 1) / x;
    cout << ans << "\n";
    return 0;
}