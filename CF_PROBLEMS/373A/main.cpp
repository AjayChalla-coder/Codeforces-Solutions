#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    map<char, int> cnt;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            char c;
            cin >> c;
            if (c != '.') {
                cnt[c]++;
            }
        }
    }

    for (auto &p : cnt) {
        if (p.second > 2 * k) {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}
