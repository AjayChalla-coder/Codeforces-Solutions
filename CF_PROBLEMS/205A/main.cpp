#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long minTime = LLONG_MAX;
    int count = 0;
    int idx = -1;

    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;

        if (x < minTime) {
            minTime = x;
            count = 1;
            idx = i;
        } else if (x == minTime) {
            count++;
        }
    }

    if (count > 1)
        cout << "Still Rozdil\n";
    else
        cout << idx << '\n';

    return 0;
}
