#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    string s;
    cin >> s;

    for (int i = 0; i < s.size(); ) {
        if (s[i] == '.') {
            cout << 0;
            i++;
        } else { 
            if (s[i + 1] == '.') cout << 1;
            else cout << 2;
            i += 2;
        }
    }

    cout << '\n';

    return 0;
}