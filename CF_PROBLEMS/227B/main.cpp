#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> pos(n+1);
    for (int i=1; i<=n; i++) {
        int x;
        cin >> x;
        pos[x] = i;
    }
    int m;
    cin >> m;
    long long vasya=0, petya=0;
    while (m--) 
    {
        int x;
        cin >> x;
        int p = pos[x];
        vasya += p;
        petya += (n - p + 1);
    }
    cout << vasya << " " << petya << "\n";
}