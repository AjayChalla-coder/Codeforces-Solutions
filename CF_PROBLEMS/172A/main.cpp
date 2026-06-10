#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<string> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }

    int len = s[0].size();
    int ans = 0;

    for (int i = 0; i < len; i++) {
        char c = s[0][i];
        for (int j = 1; j < n; j++) {
            if (s[j][i] != c) {
                cout << ans << '\n';
                return 0;
            }
        }
        ans++;
    }

    cout << ans << '\n';
    return 0;
}
