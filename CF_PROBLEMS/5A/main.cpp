#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long ans = 0;
    int online = 0;

    string s;
    while (getline(cin, s)) {
        if (s.empty()) continue;

        if (s[0] == '+') {
            online++;
        }
        else if (s[0] == '-') {
            online--;
        }
        else {
            int pos = s.find(':');
            int msg_len = s.size() - pos - 1;
            ans += 1LL * msg_len * online;
        }
    }

    cout << ans << '\n';
    return 0;
}