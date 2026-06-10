#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    int n;
    cin >> n;

    int cur = 0;
    int step = 1;

    for(int i=0; i<n-1; i++)
    {
        cur = (cur + step) % n;
        cout << cur + 1 << " ";
        step++;
    }

    return 0;
}