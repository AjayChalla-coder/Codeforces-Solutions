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

        vector<string> b(n - 2);
        for (int i = 0; i < n - 2; i++) cin >> b[i];

        string ans = "";
        ans += b[0][0];

        bool found_gap = false;

        for (int i = 0; i < n - 2; i++) {
            ans += b[i][1];

            if (i + 1 < n - 2 && b[i][1] != b[i + 1][0]) {
                ans += b[i + 1][0];
                found_gap = true;
            }
        }

        if (!found_gap) {
            ans += 'a';
        }

        cout << ans << '\n';
    }

    return 0;
}