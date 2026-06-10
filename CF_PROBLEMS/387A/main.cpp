#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio
    string s, t;
    cin >> s >> t;
    int sh = stoi(s.substr(0, 2));
    int sm = stoi(s.substr(3, 2));
    int th = stoi(t.substr(0, 2));
    int tm = stoi(t.substr(3, 2));
    int current = sh * 60 + sm;
    int sleep = th * 60 + tm;
    int bedtime = (current - sleep + 1440) % 1440;
    int bh = bedtime / 60;
    int bm = bedtime % 60;
    cout << setw(2) << setfill('0') << bh << ":"
         << setw(2) << setfill('0') << bm << '\n';

    return 0;
}
