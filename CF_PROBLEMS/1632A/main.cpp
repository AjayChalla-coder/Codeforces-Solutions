#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        if (n == 1) {
            cout << "YES\n";
        } else if (n == 2 && s[0] != s[1]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}