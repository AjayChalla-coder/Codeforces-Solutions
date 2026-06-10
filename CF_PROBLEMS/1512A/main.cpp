#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        if (a[0] == a[1]) {
            int majority = a[0];
            for (int i = 2; i < n; ++i) {
                if (a[i] != majority) {
                    cout << (i + 1) << "\n";
                    break;
                }
            }
        } else {
            if (a[2] == a[0]) cout << 2 << "\n"; 
            else cout << 1 << "\n";              
        }
    }
    return 0;
}