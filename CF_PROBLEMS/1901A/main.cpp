#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, x; 
        cin >> n >> x;
        vector<int> a(n+2);
        a[0] = 0;
        for (int i = 1; i <= n; ++i) cin >> a[i];
        a[n+1] = x;
        int ans = 0;
        for (int i = 0; i < n+1; ++i) {
            ans = max(ans, a[i+1] - a[i]);
        }
        ans = max(ans, 2 * (x - a[n]));
        cout << ans << '\n';
    }
    return 0;
}