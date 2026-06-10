#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> d(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> d[i];
    }

    int s, t;
    cin >> s >> t;

    if (s == t) {
        cout << 0 << "\n";
        return 0;
    }

    if (s > t) swap(s, t);

    int path1 = 0;
    for (int i = s; i < t; i++) {
        path1 += d[i];
    }

    int total = 0;
    for (int i = 1; i <= n; i++) {
        total += d[i];
    }

    int path2 = total - path1;

    cout << min(path1, path2) << "\n";
    return 0;
}