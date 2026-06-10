#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int t;
    cin >> t;
    while (t--) {
        long long s, k, m;
        cin >> s >> k >> m;
 
        long long r = m % (2 * k);
        long long ans;
 
        if (r < k) {
            ans = min(s, k - r);
        } else {
            ans = min(s, 2 * k - r);
        }
 
        cout << ans << '\n';
    }
    return 0;
}
