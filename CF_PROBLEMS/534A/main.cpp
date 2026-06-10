#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 1;
    } else if (n == 2 || n == 3) {
        cout << -1;
    } else {
        // Print evens
        for (int i = 2; i <= n; i += 2)
            cout << i << " ";
        // Print odds
        for (int i = 1; i <= n; i += 2)
            cout << i << " ";
    }
    return 0;
}
