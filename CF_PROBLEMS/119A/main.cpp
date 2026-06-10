#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

      int a, b, n;   cin >> a >> b >> n;

    bool simonTurn = true;

    while (true) {
        if (simonTurn) {
            int take = __gcd(a, n);
            if (n < take) {
                cout << 1 << '\n'; 
                return 0;
            }
            n -= take;
        } else {
            int take = __gcd(b, n);
            if (n < take) {
                cout << 0 << '\n'; 
                return 0;
            }
            n -= take;
        }
        simonTurn = !simonTurn;
    }
}