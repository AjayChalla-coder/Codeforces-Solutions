#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    int n;
    string s;
    cin >> n >> s;

    int i = 0;

    if (n % 3 == 1) {
        cout << s.substr(0, 2);
        i = 2;
    } else if (n % 3 == 2) {
        cout << s.substr(0, 2);
        i = 2;
    } else {
        cout << s.substr(0, 3);
        i = 3;
    }

    while (i < n) {
        cout << "-" << s.substr(i, 3);
        i += 3;
    }

    cout << endl;

    return 0;
}