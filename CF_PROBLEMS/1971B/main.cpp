#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        string r = s;
        sort(r.begin(), r.end());

        if (r.front() == r.back()) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            if (r != s) {
                cout << r << "\n";
            } else {
                reverse(r.begin(), r.end());
                cout << r << "\n";
            }
        }
    }
    return 0;
}

