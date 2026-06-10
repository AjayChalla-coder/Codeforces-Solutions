#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int t; cin >> t;
    while(t--)
    {
        int a, b; cin >> a >> b;
        int ans = 0;
        for (int n = 1; n <= 60; n++) {
            int top = (n + 1) / 2;
            int bot = n / 2;

            long long sumTop = (pow(4LL, top) - 1) / 3;
            long long sumBot = 2 * (pow(4LL, bot) - 1) / 3;

            bool ok = false;
            if (sumTop <= a && sumBot <= b) ok = true;
            if (sumTop <= b && sumBot <= a) ok = true;

            if (ok) ans = n;
            else break;
        }
        cout << ans << "\n";
    }
    return 0;
}