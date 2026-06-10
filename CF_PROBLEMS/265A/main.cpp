#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() 
{
    fastio

    string s, t; cin >> s >> t;
    int pos = 0;
    for (char c : t) {
        if(s[pos] == c) pos++;
    }
    cout << pos + 1 << "\n"; 
    return 0;
}