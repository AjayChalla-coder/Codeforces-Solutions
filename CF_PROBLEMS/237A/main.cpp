#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int prev_h = -1, prev_m = -1;
    int count = 0, max_count = 0;
    for(int i=0; i<n; i++)
    {
        int h, m;
        cin >> h >> m;
        if (h == prev_h && m == prev_m) count++;
        else count = 1;
        max_count = max(max_count, count);
        prev_h = h;
        prev_m = m;
    }
    cout << max_count << "\n";
}