#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    string s;
    cin >> s;
    int depth = 0, i = 0;
    while (i < (int)s.size()) {
        if (s[i] == '<') {
            int j = i;
            while (s[j] != '>') j++;
            string tag = s.substr(i, j - i + 1);
            if (tag[1] == '/') {
                depth--;
                cout << string(depth * 2, ' ') << tag << '\n';
            } else {
                cout << string(depth * 2, ' ') << tag << '\n';
                depth++;
            }
            i = j + 1;
        }
    }
    return 0;
}
