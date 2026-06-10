#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        bool canReduce = false;
        for (int i = 0; i + 1 < (int)s.size(); i++) {
            if (s[i] == s[i + 1]) {
                canReduce = true;
                break;
            }
        }

        if (canReduce)
            cout << 1 << '\n';
        else
            cout << s.size() << '\n';
    }
    return 0;
}
