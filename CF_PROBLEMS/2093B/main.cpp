#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin >> t)) return 0;
    while(t--) {
        string s; cin >> s;
        int zeros = 0;
        int maxZerosBefore = 0; 
        for(char c : s) {
            if(c == '0') {
                ++zeros;
            } else {
                maxZerosBefore = max(maxZerosBefore, zeros);
            }
        }
        int m = (int)s.size();
        int ans = m - (1 + maxZerosBefore);
        cout << ans << '\n';
    }
    return 0;
}
