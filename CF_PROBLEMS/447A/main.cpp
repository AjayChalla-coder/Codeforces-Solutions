#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio
    int p, n;
    cin >> p >> n;
    vector<bool> used(p, false);
    for (int i=1; i<=n; i++) {
        long long x; cin >> x;
        int h = x % p;
        if (used[h]) {
            cout << i << '\n';
            return 0;
        }
        used[h] = true;
    }
    cout << -1 << '\n';
    return 0;
}