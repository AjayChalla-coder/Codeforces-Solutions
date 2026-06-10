#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int minDiff = INT_MAX;
    int idx1 = 1, idx2 = 2;

    for (int i = 0; i < n - 1; i++) {
        int diff = abs(a[i] - a[i + 1]);
        if (diff < minDiff) {
            minDiff = diff;
            idx1 = i + 1;
            idx2 = i + 2;
        }
    }

    int diff = abs(a[n - 1] - a[0]);
    if (diff < minDiff) {
        idx1 = n;
        idx2 = 1;
    }

    cout << idx1 << " " << idx2 << endl;
    return 0;
}
