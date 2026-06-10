#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;
        vector<int> a(n+1);
        for (int i = 1; i <= n; ++i) cin >> a[i];
        if (k == 1) {
            bool hasStronger = false;
            for (int i = 1; i <= n; ++i) {
                if (a[i] > a[j]) { hasStronger = true; break; }
            }
            cout << (hasStronger ? "NO\n" : "YES\n");
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
