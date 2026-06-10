#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    int n, m;
    cin >> n >> m;
    int buses = 1;
    int current = 0;
    for(int i=0; i<n; i++)
    {
        int a;
        cin >> a;
        if (current + a <= m) current += a;
        else {
            buses++;
            current = a;
        }
    }
    cout << buses << "\n";
    return 0;
}