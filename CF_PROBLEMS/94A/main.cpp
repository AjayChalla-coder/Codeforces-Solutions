#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    string s;
    cin >> s;

    vector<string> pat(10);
    for (int i = 0; i < 10; i++) cin >> pat[i];

    for (int i = 0; i < (int)s.size(); i += 10) {
        string block = s.substr(i, 10);
        for (int d = 0; d < 10; d++) {
            if (block == pat[d]) {
                cout << d;
                break;
            }
        }
    }

    cout << "\n";
    return 0;
}