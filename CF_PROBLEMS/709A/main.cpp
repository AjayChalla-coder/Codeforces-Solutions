#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, b, d;
    cin >> n >> b >> d;
    int ans = 0;
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if(x > b) continue;
        sum += x;
        if (sum > d) {
            ans++;
            sum = 0;
        }
    }
    cout << ans << "\n";
    return 0;
}