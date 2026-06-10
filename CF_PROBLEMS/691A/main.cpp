#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int zeroCount = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == 0) zeroCount++;
    }

    if ((n == 1 && zeroCount == 0) || (n > 1 && zeroCount == 1))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
