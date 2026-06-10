#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    int n;  cin >> n;
    vector<pair<int,int>> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i].first >> points[i].second;
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        bool left = false, right = false, up = false, down = false;
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (points[j].second == points[i].second) {
                if (points[j].first > points[i].first) right = true;
                if (points[j].first < points[i].first) left = true;
            }
            if (points[j].first == points[i].first) {
                if (points[j].second > points[i].second) up = true;
                if (points[j].second < points[i].second) down = true;
            }
        }
        if (left && right && up && down) {
            ans++;
        }
    }
    cout << ans << '\n';
    return 0;
}