#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; ll c;
        cin >> n >> c;
        vector<ll> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        vector<int> dead; 
        for (int i = 0; i < n; ++i) {
            if (a[i] > c) continue; 
            ll val = a[i];
            int k = 0;
            while (val <= c) {
                ++k;
                val <<= 1; 
            }
            int T = k - 1;           
            if (T > n-1) T = n-1;    
            dead.push_back(T);
        }

        sort(dead.begin(), dead.end());
        int time = 0;
        for (int d : dead) {
            if (d >= time) {
                ++time; 
            }
        }
        int free = time;
        cout << (n - free) << '\n';
    }
    return 0;
}
