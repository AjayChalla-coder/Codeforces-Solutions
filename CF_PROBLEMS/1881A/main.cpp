#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        string cur = x;
        int ops = 0;
        if (cur.find(s) != string::npos) {
            cout << 0 << '\n';
            continue;
        }
        while ((int)cur.size() < m) {
            cur += cur;
            ops++;
        }
        int ans = -1;
        for (int extra = 0; extra <= 5; extra++) {
            if (cur.find(s) != string::npos) {
                ans = ops + extra;
                break;
            }
            cur += cur;
        }
        cout << ans << '\n';
    }
    return 0;
}