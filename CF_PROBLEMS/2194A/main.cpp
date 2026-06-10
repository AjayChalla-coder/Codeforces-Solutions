#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        long long n, w;
        cin >> n >> w;
        long long x = n - w + 1;        
        long long k = 0;
        if (x > 0) {
            k = (x + w - 1) / w;
        }
        cout << (n - k) << '\n';
    }
    return 0;
}
