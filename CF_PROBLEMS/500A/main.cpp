#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;

    int a[30000];
    for (int i = 1; i < n; i++) {
        cin >> a[i];
    }

    int pos = 1;

    while (pos < t) {
        pos += a[pos];
    }

    if (pos == t) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
