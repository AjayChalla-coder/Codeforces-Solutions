#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long k;
    cin >> n >> k;

    long long ans = LLONG_MIN;

    for (int i = 0; i < n; i++) {
        long long f, t;
        cin >> f >> t;

        long long joy;
        if (t <= k)
            joy = f;
        else
            joy = f - (t - k);

        ans = max(ans, joy);
    }

    cout << ans << "\n";
    return 0;
}