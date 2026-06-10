#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> freq(n * n + 1, 0);
        int mx = 0;
        for (int i = 0; i < n * n; i++) {
            int x;
            cin >> x;
            freq[x]++;
            mx = max(mx, freq[x]);
        }
        if (mx > n * (n - 1)) cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}