#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;
        int lg = 63 - __builtin_clzll(x);
        cout << 2 * lg + 3 << '\n';
    }
    return 0;
}