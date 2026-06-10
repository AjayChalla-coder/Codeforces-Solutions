#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int n, d;
    cin >> n >> d;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int m;
    cin >> m;
    sort(a.begin(), a.end());
    int used = min(n, m);
    int profit = 0;
    for(int i=0; i<used; i++) profit += a[i];
    if (m > n) profit -= (m - n) * d;
    cout << profit << "\n";
    return 0;
}