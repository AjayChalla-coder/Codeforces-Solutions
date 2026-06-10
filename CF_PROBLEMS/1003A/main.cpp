#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> freq(101, 0);
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        freq[x]++;
    }
    int ans = 0;
    for(int i=1; i<=100; i++)
    {
        ans = max(ans, freq[i]);
    }
    cout << ans << "\n";
    return 0;
}