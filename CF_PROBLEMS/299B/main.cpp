#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int cnt = 0;
    for (char c : s) {
        if (c == '#') {
            cnt++;
            if (cnt >= k) {
                cout << "NO\n";
                return 0;
            }
        } else {
            cnt = 0;
        }
    }

    cout << "YES\n";
    return 0;
}