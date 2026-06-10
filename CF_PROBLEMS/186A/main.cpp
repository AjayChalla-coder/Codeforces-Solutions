#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    string a, b;
    cin >> a >> b;

    if (a.size() != b.size()) {
        cout << "NO\n";
        return 0;
    }

    vector<int> diff;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            diff.push_back(i);
        }
    }

    if (diff.size() != 2) {
        cout << "NO\n";
        return 0;
    }

    int i = diff[0], j = diff[1];
    if (a[i] == b[j] && a[j] == b[i])
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}