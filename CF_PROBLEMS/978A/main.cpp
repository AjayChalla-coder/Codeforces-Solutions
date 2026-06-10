#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    set<int> seen;
    vector<int> result;
        for (int i = n - 1; i >= 0; i--) {
        if (seen.count(a[i]) == 0) {
            result.push_back(a[i]);
            seen.insert(a[i]);
        }
    }
    reverse(result.begin(), result.end());
    cout << result.size() << '\n';
    for(int x : result) cout << x << '\n';
}