#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio
    int n, d;
    cin >> n >> d;
    int time = 0;
    int songs_time = 0;
    for (int i = 0; i < n; i++) {
        int t;
        cin >> t;
        songs_time += t;
    }
    int rest_time = (n - 1) * 10;
    int min_time = songs_time + rest_time;
    if (min_time > d) {
        cout << -1 << endl;
        return 0;
    }
    int remaining = d - min_time;
    int jokes = (n - 1) * 2 + remaining / 5;
    cout << jokes << "\n";
    return 0;
}