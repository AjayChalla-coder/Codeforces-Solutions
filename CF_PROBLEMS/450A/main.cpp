#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int max_rounds = 0;
    int ans = 0;
    for(int i=0; i<n; i++)
    {
        int rounds = (a[i] + m - 1) / m;
        if (rounds >= max_rounds) {
            max_rounds = rounds;
            ans = i + 1; 
        }
    }
    cout << ans << endl;
    return 0;
}