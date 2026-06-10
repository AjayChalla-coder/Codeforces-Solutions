#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int n;
    cin >> n;
    vector<int> k(n);
    for(int i=0; i<n; i++) cin >> k[i];
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        int total = 0;
        for (int j = 0; j < k[i]; j++) {
            int m;
            cin >> m;
            total += m * 5 + 15;
        }
        ans = min(ans, total);
    }
    cout << ans << "\n";
    return 0;
}