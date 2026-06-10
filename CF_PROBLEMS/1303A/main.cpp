#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        int first = -1, last = -1;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                if (first == -1) first = i;
                last = i;
            }
        }

        if (first == -1) {
            cout << 0 << '\n'; // no '1' at all
            continue;
        }

        int zeros = 0;
        for (int i = first; i <= last; i++) {
            if (s[i] == '0') zeros++;
        }

        cout << zeros << '\n';
    }
    return 0;
}
