#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    if (n == 0) {
        cout << 1 << "\n";
        return 0;
    }

    int r = n % 4;

    if (r == 1) cout << 8 << "\n";
    else if (r == 2) cout << 4 << "\n";
    else if (r == 3) cout << 2 << "\n";
    else cout << 6 << "\n";

    return 0;
}