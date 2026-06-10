#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++) cin >> a[i];
        sort(a.begin(), a.end(), greater<int>());
        if(a.front() == a.back())
        {
            cout << "NO\n";
            continue;
        }
        if(a[0] == a [1])
        {
            int idx = 2;
            while(idx < n && a[idx] == a[0]) idx++; 
            swap(a[1], a[idx]);
        }
        cout << "YES\n";
        for(int x : a) cout << x << ' ';
        cout << "\n";
    }
    return 0;
}