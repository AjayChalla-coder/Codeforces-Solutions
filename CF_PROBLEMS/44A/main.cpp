#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() 
{
    fastio

    int n;cin >> n;

    set<pair<string, string>> leaves;

    for (int i = 0; i < n; i++) {
        string species, color; cin >> species >> color;
        leaves.insert({species, color});
    }
    cout << leaves.size() << '\n';
    return 0;
}