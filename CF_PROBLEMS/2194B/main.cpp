#include <iostream>
#include <vector>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        long long x, y;
        cin >> n >> x >> y;
        vector<long long> a(n);
        long long totalSum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            totalSum += a[i];
        }

        long long totalTransfers = 0;
        for (int i = 0; i < n; ++i) totalTransfers += a[i] / x;

        long long ans = 0;
        for (int i = 0; i < n; ++i) {
            long long usable = totalTransfers - (a[i] / x);
            long long cur = a[i] + usable * y;
            ans = max(ans, cur);
        }
        cout << ans << '\n';
    }
    return 0;
}
