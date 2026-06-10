#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for(int &x : a)
            cin >> x;

        int pos = min_element(a.begin(), a.end()) - a.begin();
        a[pos]++;

        long long product = 1;

        for(int x : a)
            product *= x;

        cout << product << "\n";
    }
}