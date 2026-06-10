#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        set<int> s;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            s.insert(a[i]);
        }
        int d = s.size();
        if ((n - d) % 2 == 0)
            cout << d << "\n";
        else
            cout << d - 1 << "\n";
    }
    return 0;
}