#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    int n; cin >> n;

    vector<int> speed(n), ram(n), hdd(n), cost(n);
    for(int i=0; i<n; i++) cin >> speed[i] >> ram[i] >> hdd[i] >> cost[i];
    vector<bool> outdated(n, false);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            if (speed[j] > speed[i] &&
                ram[j]   > ram[i] &&
                hdd[j]   > hdd[i]) {
                outdated[i] = true;
                break; 
            }
        }
    }
    int ans = -1;
    int minCost = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (!outdated[i] && cost[i] < minCost) {
            minCost = cost[i];
            ans = i + 1; 
        }
    }
    cout << ans << '\n';
    return 0;
}