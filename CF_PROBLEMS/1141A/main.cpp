#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    if (m % n != 0) {
        cout << -1 << '\n';
        return 0;
    }

    long long k = m / n;
    int moves = 0;

    while (k % 2 == 0) {
        k /= 2;
        moves++;
    }

    while (k % 3 == 0) {
        k /= 3;
        moves++;
    }

    if (k == 1) cout << moves << '\n';
    else cout << -1 << '\n';

    return 0;
}