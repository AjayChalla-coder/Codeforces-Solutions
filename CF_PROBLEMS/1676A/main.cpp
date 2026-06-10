#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int L = (s[0]-'0') + (s[1]-'0') + (s[2]-'0');
        int R = (s[3]-'0') + (s[4]-'0') + (s[5]-'0');

        if (L == R) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}
