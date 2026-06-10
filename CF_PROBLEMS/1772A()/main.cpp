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

        int x = s[0] - '0';
        int y = s[2] - '0';

        cout << x + y << "\n";
    }
    return 0;
}
