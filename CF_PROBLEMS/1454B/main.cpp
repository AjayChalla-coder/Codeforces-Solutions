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
        vector<int> freq(n + 1, 0);
        for (int i=0; i<n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        int min_unique = INT_MAX;
        for (int i = 0; i < n; i++) {
            if (freq[a[i]] == 1) {
                min_unique = min(min_unique, a[i]);
            }
        }
        if (min_unique == INT_MAX) {
            cout << -1 << "\n";
            continue;
        }
        for (int i = 0; i < n; i++) {
            if (a[i] == min_unique) {
                cout << i + 1 << "\n";
                break;
            }
        }
    }
    return 0;
}