#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int min_moves = (n + 1) / 2;

    int k = ((min_moves + m - 1) / m) * m;

    if (k <= n)
        cout << k << "\n";
    else
        cout << -1 << "\n";

    return 0;
}