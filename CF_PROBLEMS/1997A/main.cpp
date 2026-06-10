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
        int n = s.size();

        // find first place with equal adjacent chars
        int pos = -1;
        for (int i = 0; i + 1 < n; ++i) {
            if (s[i] == s[i+1]) { pos = i; break; }
        }

        if (pos != -1) {
            // insert between s[pos] and s[pos+1]
            char pick = 'a';
            if (pick == s[pos]) pick = 'b';
            string ans = s.substr(0, pos+1) + pick + s.substr(pos+1);
            cout << ans << '\n';
        } else {
            // no equal adjacent chars -> insert at beginning a char != s[0]
            char pick = 'a';
            if (pick == s[0]) pick = 'b';
            string ans = string(1, pick) + s;
            cout << ans << '\n';
        }
    }
    return 0;
}
