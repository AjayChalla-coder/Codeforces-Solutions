#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    if (!(cin >> n >> m)) return 0;
    cout << (min(n,m) % 2 ? "Akshat" : "Malvika") << '\n';
    return 0;
}