#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int base = n / m;
    int extra = n % m;

    for (int i = 0; i < m - extra; i++)
        cout << base << " ";

    for (int i = 0; i < extra; i++)
        cout << base + 1 << " ";

    cout << "\n";
    return 0;
}
