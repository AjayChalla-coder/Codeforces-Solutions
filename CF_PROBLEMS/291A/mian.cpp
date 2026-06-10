#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    unordered_map<long long, int> cnt;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x != 0)
            cnt[x]++;
    }

    int pairs = 0;
    for (auto &p : cnt) {
        if (p.second > 2) {
            cout << -1 << "\n";
            return 0;
        }
        if (p.second == 2)
            pairs++;
    }

    cout << pairs << "\n";
    return 0;
}
