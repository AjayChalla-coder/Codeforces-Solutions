#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int t;
    cin >> t;
    while(t--)
    {
        int x, n;
        cin>>x>>n;
        if(n%2==0) cout << 0 << '\n';
        else cout << x << '\n';
    }
    return 0;
}