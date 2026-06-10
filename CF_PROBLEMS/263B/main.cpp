#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    int n, k;
    cin >> n >> k;

    vector<long long> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    if(k > n)
    { 
        cout << -1 << '\n';
        return 0;
    }
    sort(a.begin(), a.end());
    long long t = a[n - k];
    cout << t << " 0\n";
    return 0;
}