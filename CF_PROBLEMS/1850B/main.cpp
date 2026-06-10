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

        int best_quality = -1;
        int winner_index = -1;

        for (int i = 1; i <= n; i++) {
            int a, b;
            cin >> a >> b;

            if (a <= 10 && b > best_quality) {
                best_quality = b;
                winner_index = i;
            }
        }

        cout << winner_index << "\n";
    }

    return 0;
}