#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        set<int> s;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            s.insert(x);
        }
        int distinct = s.size();
        cout << 2 * distinct - 1 << '\n';
    }
    return 0;
}