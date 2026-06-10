#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    int n; cin >> n;
    
    int sx = 0, sy = 0, sz = 0;

    for(int i=0; i<n; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        sx += x;
        sy += y;
        sz += z;
    }

    if(sx == 0 && sy == 0 && sz == 0)
    {
        cout << "YES" << "\n";
    }
    else
    {
        cout << "NO" << "\n";
    }
    return 0;
}