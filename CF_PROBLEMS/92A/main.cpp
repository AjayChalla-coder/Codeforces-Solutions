#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    int n, m;
    cin >> n >> m;

    int i = 1;
    while(m >= i)
    {
        m -= i;
        i++;
        if(i > n) i = 1;
    }
    cout << m << "\n";
    return 0;
}