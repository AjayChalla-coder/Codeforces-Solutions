#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    ll d;
    int n;
    cin >> d;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    ll cur = 1;
    ll ans = 0;
    for(int i=0; i<n; i++)
    {
        cur = (cur + a[i]) % d;
        if(cur==0) cur=d;
        if (i != n - 1 && cur != 1) {
            ans += (d - cur + 1) % d;
            cur = 1; }
    }
    cout << ans << "\n";
    return 0;
}