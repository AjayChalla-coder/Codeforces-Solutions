#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin >> t)) return 0;
    while (t--) {
        int n, k; 
        cin >> n >> k;
        bool found = false;
        for (int i = 0; i < n; ++i) {
            int x; cin >> x;
            if (x == k) found = true;
        }
        cout << (found ? "YES" : "NO") << '\n';
    }
    return 0;
}