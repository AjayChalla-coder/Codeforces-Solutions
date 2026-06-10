#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n), b(n);
        for (int &x : a) cin >> x;
        for (int &x : b) cin >> x;

        sort(a.begin(), a.end());               
        sort(b.begin(), b.end(), greater<int>()); 

        for (int i = 0; i < k; i++) {
            if (a[i] < b[i]) swap(a[i], b[i]);
            else break;
        }

        cout << accumulate(a.begin(), a.end(), 0LL) << "\n";
    }
    return 0;
}