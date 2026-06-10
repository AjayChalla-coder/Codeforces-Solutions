#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

        int l = 0, r = n - 1;
        if ((a[l] + a[r]) % 2 == 0) {
            cout << 0 << '\n';
            continue;
        }
        int lcnt = 0;
        int rr = r;
        while (l < rr && (a[l] + a[rr]) % 2 != 0) {
            l++;
            lcnt++;
        }
        int rcnt = 0;
        int ll = 0;
        while (ll < r && (a[ll] + a[r]) % 2 != 0) {
            r--;
            rcnt++;
        }

        cout << min(lcnt, rcnt) << '\n';
    }
    return 0;
}
