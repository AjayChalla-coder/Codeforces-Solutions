#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin >> t)) return 0;
    while (t--) {
        long long a,b,c;
        cin >> a >> b >> c;
        long long s = a + b + c;
        if (s % 3 != 0) {
            cout << "NO\n";
            continue;
        }
        long long k = s / 3;
        cout << (k >= b ? "YES\n" : "NO\n");
    }
    return 0;
}
