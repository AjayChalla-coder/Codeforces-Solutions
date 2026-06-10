#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        string s; 
        cin >> s;

        bool ok = false;
        for (int i = 0; i + 1 < n; ++i) {
            if (s[i] != s[i + 1]) {
                cout << i + 1 << " " << i + 2 << "\n"; // 1-based
                ok = true;
                break;
            }
        }
        if (!ok) cout << "-1 -1\n";
    }
    return 0;
}