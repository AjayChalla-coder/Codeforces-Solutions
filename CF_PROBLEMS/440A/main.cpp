#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio
    int n;
    cin >> n;
    long long total = 1LL * n * (n + 1) / 2;
    long long watchedSum = 0;
    for(int i=0; i<n-1; i++)
    {.
        int x; cin >> x;
        watchedSum += x;
    }
    cout << total - watchedSum << "\n";
    return 0;
}