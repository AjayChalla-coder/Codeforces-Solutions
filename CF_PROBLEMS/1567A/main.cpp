#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        string ans = s;

        for (int i = 0; i < n; i++) {
            if (s[i] == 'U') ans[i] = 'D';
            else if (s[i] == 'D') ans[i] = 'U';
            else ans[i] = s[i];  
        }

        cout << ans << "\n";
    }

    return 0;
}