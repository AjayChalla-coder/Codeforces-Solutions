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

        int cntT = 0;
        string rest = "";

        for (char c : s) {
            if (c == 'T') cntT++;
            else rest.push_back(c);
        }

        string ans(cntT, 'T');
        ans += rest;

        cout << ans << '\n';
    }
    return 0;
}