#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    string s;
    cin >> s;

    int cur = 0, ans = 0;
    for (char c : s) {
        if (c == '4' || c == '7') {
            cur++;
            ans = max(ans, cur);
        } else {
            cur = 0;
        }
    }

    if (ans == 0) cout << -1 << "\n";
    else cout << ans << "\n";

    return 0;
}
