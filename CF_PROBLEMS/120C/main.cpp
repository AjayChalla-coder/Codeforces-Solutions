#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n, k;cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> eaten(n, 0);
    priority_queue<pair<int,int>> pq;
    for (int i = 0; i < n; i++) pq.push({a[i], i});
    int piglet = 0;
    while (!pq.empty()) {
        auto [honey, id] = pq.top();
        pq.pop();
        if (honey < k || eaten[id] == 3) {
            piglet += honey;
        } else {
            honey -= k;
            eaten[id]++;
            pq.push({honey, id});
        }
    }
    cout << piglet << '\n';
    return 0;
}