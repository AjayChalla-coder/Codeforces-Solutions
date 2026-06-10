#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int G = -1, T = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'G') G = i;
        if (s[i] == 'T') T = i;
    }
    for (int i = G; i < n; i += k) {
        if (s[i] == '#') break;
        if (i == T) {
            cout << "YES\n";
            return 0;
        }
    }
    for (int i = G; i >= 0; i -= k) {
        if (s[i] == '#') break;
        if (i == T) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
