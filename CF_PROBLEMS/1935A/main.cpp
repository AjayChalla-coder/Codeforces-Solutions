#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tc;
    if (!(cin >> tc)) return 0;
    while (tc--) {
        long long n;
        string s;
        cin >> n >> s;
        string r = s;
        reverse(r.begin(), r.end());
        string cand1 = s;
        string cand2 = r + s;
        if (cand1 <= cand2) cout << cand1 << '\n';
        else cout << cand2 << '\n';
    }
    return 0;
}
