#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, k;
    if (!(cin >> n >> k)) return 0;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];

    int threshold = a[k-1];
    int cnt = 0;
    for (int x : a) 
    {
        if (x >= threshold && x > 0) ++cnt;
    }
    cout << cnt << "\n";
    cin.get();
    cin.get();
    return 0;
}