#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    int n, m;
    cin >> n >> m;

    vector<string> marks(n);
    for (int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    vector<bool> good(n, false);

    for (int j = 0; j < m; j++) {
        int mx = 0;
        for (int i = 0; i < n; i++) {
            mx = max(mx, marks[i][j] - '0');
        }
        for (int i = 0; i < n; i++) {
            if (marks[i][j] - '0' == mx) {
                good[i] = true;
            }
        }
    }

    int ans = 0;
    for (bool x : good) {
        if (x) ans++;
    }

    cout << ans << '\n';
    return 0;
}