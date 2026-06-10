#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        const string A = "2026";
        const string B = "2025";

        // Cost to create "2026"
        int costA = INT_MAX;
        for (int i = 0; i + 3 < n; i++) {
            int diff = 0;
            for (int j = 0; j < 4; j++)
                if (s[i + j] != A[j]) diff++;
            costA = min(costA, diff);
        }

        // Cost to eliminate "2025"
        int costB = (s.find(B) == string::npos ? 0 : 1);

        cout << min(costA, costB) << '\n';
    }
}
