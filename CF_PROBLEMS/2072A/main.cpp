#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k, p;
        cin >> n >> k >> p;

        if (k == 0) {
            cout << 0 << '\n';
            continue;
        }

        if (abs(k) > n * p) {
            cout << -1 << '\n';
            continue;
        }

        int ops = (abs(k) + p - 1) / p; // ceil division
        if (ops <= n)
            cout << ops << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}
