#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio
    int n;cin >> n;
    for (int y = n / 7; y >= 0; y--) {
        int rem = n - 7 * y;
        if (rem % 4 == 0) {
            int x = rem / 4;
            cout << string(x, '4') << string(y, '7') << '\n';
            return 0;
        }
    }
    cout << -1 << '\n';
    return 0;
}