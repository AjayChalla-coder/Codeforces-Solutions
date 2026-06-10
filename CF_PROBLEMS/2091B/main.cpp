#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin >> t)) return 0;
    while(t--) {
        int n;
        long long x;
        cin >> n >> x;
        vector<long long> a(n);
        for(int i = 0; i < n; ++i) cin >> a[i];
        sort(a.rbegin(), a.rend()); 
        int teams = 0;
        long long cur_size = 0;
        for(int i = 0; i < n; ++i) {
            ++cur_size;
            if (a[i] * cur_size >= x) {
                ++teams;
                cur_size = 0;
            }
        }
        cout << teams << '\n';
    }
    return 0;
}
