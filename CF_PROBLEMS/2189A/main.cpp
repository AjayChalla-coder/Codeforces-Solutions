#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; 
    if(!(cin >> T)) return 0;
    while (T--) {
        int n, h, l; 
        cin >> n >> h >> l;
        vector<int>a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        int r = 0, c = 0, b = 0;
        int mn = min(h, l);
        for (int x : a) {
            if (x <= mn) ++b;
            else if (x <= h) ++r;      
            else if (x <= l) ++c;      
        }
        int U = r + c + b;
        int D = max(0, abs(r - c) - b);
        int pairs = (U - D) / 2;
        cout << pairs << '\n';
    }
    return 0;
}
