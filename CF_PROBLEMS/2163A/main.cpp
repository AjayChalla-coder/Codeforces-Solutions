#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        sort(a.begin(), a.end());

        bool ok = true;
        // Check 1-based even indices: i = 2,4,6,... -> 0-based indices 1,3,5,...
        for (int idx = 1; idx + 1 < n; idx += 2) {
            if (a[idx] != a[idx + 1]) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
    return 0;
}
