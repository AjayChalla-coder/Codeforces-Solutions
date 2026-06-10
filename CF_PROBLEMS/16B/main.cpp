#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    int n, m; cin >> n >> m;

    vector<pair<int,int>> boxes(m);
    for (int i = 0; i < m; i++) cin >> boxes[i].first >> boxes[i].second;

    sort(boxes.begin(), boxes.end(),
         [](auto &a, auto &b) {
             return a.second > b.second;
         });
    int total = 0;
    for (int i = 0; i < m && n > 0; i++) {
        int take = min(n, boxes[i].first);
        total += take * boxes[i].second;
        n -= take;
    }
    cout << total << "\n"; 
    return 0;
}