#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        string s;
        cin >> s;
        int cnt1 = 0;
        for (char c : s) if (c == '1') ++cnt1;
        cout << cnt1 << '\n';
    }
    return 0;
}
