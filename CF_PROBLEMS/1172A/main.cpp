#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n+1), b(n+1);
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];

    vector<int> pos_b(n+1, 0);
    for (int i = 1; i <= n; i++) {
        if (b[i] != 0) pos_b[b[i]] = i;
    }

    int first1 = -1;
    for (int i = 1; i <= n; i++) {
        if (b[i] == 1) {
            first1 = i;
            break;
        }
    }

    if (first1 != -1) {
        bool suffix_ok = true;
        for (int j = first1; j <= n; j++) {
            if (b[j] != j - first1 + 1) {
                suffix_ok = false;
                break;
            }
        }

        if (suffix_ok) {
            int t = first1 - 1;      
            int k = n - t;             

            bool possible = true;
            for (int j = 1; j <= t; j++) {
                int need = k + j;      
                if (pos_b[need] != 0 && pos_b[need] >= j) {
                    possible = false;
                    break;
                }
            }
            if (possible) {
                cout << t << "\n";
                return 0;
            }
        }
    }

    int mx = 0;
    for (int i = 1; i <= n; i++) {
        if (pos_b[i] != 0) {
            mx = max(mx, pos_b[i] - (i - 1));
        }
    }

    cout << n + max(mx, 0) << "\n";
    return 0;
}
