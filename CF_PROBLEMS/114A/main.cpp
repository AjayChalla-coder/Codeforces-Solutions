#include <iostream>
using namespace std;

int main() {
    long long k, l;
    cin >> k >> l;

    int exponent = 0;

    while (l % k == 0) {
        l /= k;
        exponent++;
    }

    if (l == 1) {
        cout << "YES\n";
        cout << exponent - 1 << "\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}
