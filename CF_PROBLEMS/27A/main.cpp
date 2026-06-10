#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int expected = 1;
    for (int x : a) {
        if (x == expected) {
            expected++;
        }
    }

    cout << expected << endl;
    return 0;
}