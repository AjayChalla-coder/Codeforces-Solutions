#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int k, l, m, n, d;
    cin  >> k >> l >> m >> n >> d;
    int dam = 0;
    for(int i=1; i<=d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) dam++;
    }
    cout << dam << "\n";
    return 0;
}