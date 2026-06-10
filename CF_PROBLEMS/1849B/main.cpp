#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<pair<long long, int>> v;

        for(int i = 1; i <= n; i++) {
            long long a;
            cin >> a;

            long long rem = a % k;
            if(rem == 0) rem = k;

            v.push_back({rem, i});
        }

        sort(v.begin(), v.end(), [](auto &a, auto &b) {
            if(a.first == b.first) return a.second < b.second;
            return a.first > b.first;
        });

        for(auto &p : v) {
            cout << p.second << " ";
        }
        cout << "\n";
    }
}