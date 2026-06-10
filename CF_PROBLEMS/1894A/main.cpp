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

        bool canA = false, canB = false;

        for (int X = 1; X <= n; X++) {
            for (int Y = 1; Y <= n; Y++) {
                int setsA = 0, setsB = 0;
                int i = 0;
                bool ok = true;

                while (i < n && setsA < Y && setsB < Y) {
                    int cntA = 0, cntB = 0;

                    while (i < n && cntA < X && cntB < X) {
                        if (s[i] == 'A') cntA++;
                        else cntB++;
                        i++;
                    }

                    if (cntA == X) setsA++;
                    else if (cntB == X) setsB++;
                    else {
                        ok = false;
                        break;
                    }
                }

                if (!ok || i != n) continue;

                if (setsA == Y && setsB < Y) canA = true;
                if (setsB == Y && setsA < Y) canB = true;
            }
        }

        if (canA && !canB) cout << "A\n";
        else if (canB && !canA) cout << "B\n";
        else cout << "?\n";
    }
    return 0;
}
