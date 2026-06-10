#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int k; cin >> k;
        int cnt = 0;
        int x = 0;
        while (cnt < k) {
            ++x;
            if (x % 3 == 0) continue;
            if (x % 10 == 3) continue;
            ++cnt;
        }
        cout << x << '\n';
    }
    return 0;
}