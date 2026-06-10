#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    cin >> T;
    while (T--) {
        vector<string> g(8);
        for (int i = 0; i < 8; ++i) cin >> g[i];
        string ans;
        for (int r = 0; r < 8; ++r)
            for (int c = 0; c < 8; ++c)
                if (g[r][c] != '.') ans.push_back(g[r][c]);
        cout << ans << '\n';
    }
    return 0;
}