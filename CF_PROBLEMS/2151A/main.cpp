#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> a(m);
        for (int i = 0; i < m; ++i) cin >> a[i];

        // basic pattern validation
        bool ok = true;
        for (int i = 1; i < m; ++i) {
            if (!(a[i] == a[i-1] + 1 || a[i] == 1)) {
                ok = false;
                break;
            }
        }
        if (!ok) {
            cout << 0 << "\n";
            continue;
        }

        // build segments (lengths of consecutive +1 runs)
        vector<int> seg;
        int len = 1;
        for (int i = 1; i < m; ++i) {
            if (a[i] == a[i-1] + 1) ++len;
            else { seg.push_back(len); len = 1; }
        }
        seg.push_back(len);
        int k = seg.size();

        // single segment => can slide across blocks
        if (k == 1) {
            long long need = (long long)a[0] + seg[0] - 1; // minimum block size to contain it
            if (need > n) cout << 0 << "\n";
            else cout << (n - (int)need + 1) << "\n";
            continue;
        }

        // k >= 2 : equalities must hold -> determine s (start block size)
        // From first segment (since it's followed by reset): s == a0 + seg0 - 1
        long long s = (long long)a[0] + seg[0] - 1;

        // For middle segments j = 1 .. k-2, we must have seg[j] == s + j
        bool consistent = true;
        for (int j = 1; j <= k - 2; ++j) {
            if ((long long)seg[j] != s + j) { consistent = false; break; }
        }
        // last segment must just fit: seg[k-1] <= s + (k-1)
        if (!consistent || s < 1 || s > n || seg[k-1] > s + (k-1)) {
            cout << 0 << "\n";
        } else {
            cout << 1 << "\n";
        }
    }

    return 0;
}
