#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    int n; cin >> n;

    vector<int> h(n);
    for (int i = 0; i < n; i++) cin >> h[i];

    int ans = 1;

    for (int i = 0; i < n; i++) {
        int l = i, r = i;

        while (l > 0 && h[l - 1] <= h[l]) l--;

        while (r < n - 1 && h[r + 1] <= h[r]) r++;

        ans = max(ans, r - l + 1);
    }
    cout << ans << '\n';
    return 0;
}