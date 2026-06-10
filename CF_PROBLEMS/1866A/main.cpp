#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long x;
    long long minAbs = 1e18;
    bool hasZero = false;

    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x == 0) {
            hasZero = true;
        }
        minAbs = min(minAbs, abs(x));
    }

    if (hasZero) cout << 0;
    else cout << minAbs;

    return 0;
}