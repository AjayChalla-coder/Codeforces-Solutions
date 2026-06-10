#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll run_order(ll k, ll req1, ll drop1, ll req2, ll drop2) {
    ll temp = k;
    ll cnt = 0;
    if (temp >= req1) {
        ll c1 = (temp - req1) / drop1 + 1;
        cnt += c1;
        temp -= c1 * drop1;
    }
    if (temp >= req2) {
        ll c2 = (temp - req2) / drop2 + 1;
        cnt += c2;
    }
    return cnt;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        long long k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;
        ll ans = max(run_order(k, a, x, b, y),
                     run_order(k, b, y, a, x));
        cout << ans << '\n';
    }
    return 0;
}
