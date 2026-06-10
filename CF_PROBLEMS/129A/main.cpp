#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[105];
    int total = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        total += a[i];
    }

    int ways = 0;

    for (int i = 0; i < n; i++) {
        int remaining = total - a[i];

        if (remaining % 2 == 0) {
            ways++;
        }
    }

    cout << ways;

    return 0;
}
