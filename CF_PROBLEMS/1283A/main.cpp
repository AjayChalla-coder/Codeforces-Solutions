#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int h, m;
        cin >> h >> m;

        int passed = h * 60 + m;
        cout << 1440 - passed << "\n";
    }

    return 0;
}