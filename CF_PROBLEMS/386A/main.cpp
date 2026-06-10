#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    int n; cin >> n;
    vector<int> p(n);
    for(int i=0; i<n; i++) cin >> p[i];
    int max1 = -1, max2 = -1, winner = -1;
    for (int i = 0; i < n; i++) {
        if (p[i] > max1) {
            max2 = max1;
            max1 = p[i];
            winner = i;
        } else if (p[i] > max2) max2 = p[i];
    }
    cout << winner + 1 << " " << max2 << endl;
    return 0;
}