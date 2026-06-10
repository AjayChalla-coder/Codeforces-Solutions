#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sentA = 0, okA = 0;
    int sentB = 0, okB = 0;

    for (int i = 0; i < n; i++) {
        int t, x, y;
        cin >> t >> x >> y;

        if (t == 1) {
            sentA += 10;
            okA += x;
        } else {
            sentB += 10;
            okB += x;
        }
    }

    if (okA * 2 >= sentA)
        cout << "LIVE\n";
    else
        cout << "DEAD\n";

    if (okB * 2 >= sentB)
        cout << "LIVE\n";
    else
        cout << "DEAD\n";

    return 0;
}