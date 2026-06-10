#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio
    int a[4];
    for (int i = 0; i < 4; i++) cin >> a[i];
    string s;
    cin >> s;
    int total = 0;
    for (char c : s) total += a[c - '1'];
    cout << total << "\n";
    return 0;
}
