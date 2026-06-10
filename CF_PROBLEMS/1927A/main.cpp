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

        int firstB = -1, lastB = -1;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                if (firstB == -1) firstB = i;
                lastB = i;
            }
        }

        cout << (lastB - firstB + 1) << "\n";
    }
    return 0;
}
