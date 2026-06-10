#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() 
{
    fastio
    int n; cin >> n;
    int cnt[4] = {0};
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }
    int mx = max({cnt[1], cnt[2], cnt[3]});
    cout << n - mx << '\n';
    return 0;
}                                                                            