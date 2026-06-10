#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    if (!(cin >> q)) return 0;
    while (q--) {
        string s, t;
        cin >> s >> t;
        int n = s.size(), m = t.size();
        int L = 0;
        int lim = min(n, m);
        while (L < lim && s[L] == t[L]) ++L;
        int save = max(0, L - 1);
        int ans = n + m - save;
        cout << ans << '\n';
    }
    return 0;
}
 