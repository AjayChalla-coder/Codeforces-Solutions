#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> pref(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        pref[i] = pref[i - 1] + (x == 1);
    }

    while (m--) {
        int l, r;
        cin >> l >> r;

        int len = r - l + 1;
        if (len % 2 == 1) {
            cout << 0 << "\n";
            continue;
        }

        int pos = pref[r] - pref[l - 1];
        if (pos == len / 2)
            cout << 1 << "\n";
        else
            cout << 0 << "\n";
    }

    return 0;
}
