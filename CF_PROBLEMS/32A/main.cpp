#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio
    int n;
    long long d;
    cin >> n >> d;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    sort(a.begin(), a.end());
    long long ans = 0;
    int r = 0;
    for (int l = 0; l < n; l++) {
        while (r < n && a[r] - a[l] <= d)
            r++;
        ans += (r - l - 1);
    }
    cout << ans * 2 << "\n";
    return 0;
}