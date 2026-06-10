#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    int mn = *min_element(a.begin(), a.end());
    int ans = INT_MAX;
    for (int x : a) {
        if (x > mn) ans = min(ans, x);
    }
    if (ans == INT_MAX) cout << "NO\n";
    else cout << ans << "\n";
    return 0;
}