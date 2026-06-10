#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int t;
    cin >> t;
    while(t--)
    {
        int a, x, y;
        cin >> a >> x >> y;
        int l = min(x, y);
        int r = max(x, y);
        if (a < l || a > r)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}