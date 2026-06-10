#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int t; cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> freq;
        for (int i = 0; i < n; ) {
            int j = i;
            while (j < n && a[j] == a[i]) j++;
            freq.push_back(j - i);
            i = j;
        }

        int ans = 0;
        int maxf = *max_element(freq.begin(), freq.end());

        for (int k = 1; k <= maxf; k++) {
            int cnt = 0;
            for (int f : freq) {
                if (f >= k) cnt++;
            }
            ans = max(ans, k * cnt);
        }
        cout << ans << '\n';
    }

    return 0;
}