#include <bits/stdc++.h>
using namespace std;

struct Node {
    int b, a;
};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, p;
        cin >> n >> p;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];
        vector<Node> v(n);
        for (int i = 0; i < n; i++) {
            v[i] = {b[i], a[i]};
        }
        sort(v.begin(), v.end(), [](const Node& x, const Node& y) {
            if (x.b != y.b) return x.b < y.b;
            return x.a > y.a;
        });
        long long ans = p; 
        deque<pair<int,int>> q; 
        if (v[0].b < p) {
            q.push_back({v[0].b, v[0].a});
        }
        for (int i = 1; i < n; i++) {
            while (!q.empty() && q.front().second == 0) q.pop_front();
            if (!q.empty() && q.front().first < p) {
                ans += q.front().first;
                q.front().second--;
            } else {
                ans += p;
            }
            if (v[i].b < p) {
                q.push_back({v[i].b, v[i].a});
            }
        }
        cout << ans << '\n';
    }
    return 0;
}