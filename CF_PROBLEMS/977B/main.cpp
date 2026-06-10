#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<string, int> cnt;

    for (int i = 0; i + 1 < n; i++) {
        cnt[s.substr(i, 2)]++;
    }

    string ans;
    int best = 0;

    for (auto &p : cnt) {
        if (p.second > best) {
            best = p.second;
            ans = p.first;
        }
    }

    cout << ans << "\n";
    return 0;
}
