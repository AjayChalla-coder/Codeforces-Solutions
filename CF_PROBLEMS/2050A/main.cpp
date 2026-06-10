#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    if (!(cin >> t)) return 0;

    while (t--) {
        int n, m;
        cin >> n >> m;

        int used = 0;
        int count = 0;
        bool stopped = false;

        for (int i = 0; i < n; ++i) {
            string s;
            cin >> s;
            if (stopped) continue;          
            int L = (int)s.size();
            if (used + L <= m) {
                used += L;
                ++count;
            } else {
                stopped = true;            
            }
        }

        cout << count << '\n';
    }

    return 0;
}
