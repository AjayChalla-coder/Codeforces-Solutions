#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio
    int n, v;
    cin >> n >> v;
    vector<int> goodSellers;
    for (int i = 1; i <= n; i++) {
        int k; cin >> k;
        bool canDeal = false;
        for (int j = 0; j < k; j++) {
            int price;
            cin >> price;
            if (price < v) canDeal = true;
        }
        if (canDeal) {
            goodSellers.push_back(i);
        }
    }
    cout << goodSellers.size() << '\n';
    for (int idx : goodSellers) cout << idx << " ";
    cout << '\n';
    return 0;
}