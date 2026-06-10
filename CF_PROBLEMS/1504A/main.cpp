#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool is_pal(const string &t) {
    int i = 0, j = (int)t.size() - 1;
    while (i < j) {
        if (t[i] != t[j]) return false;
        ++i; --j;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T; cin >> T;
    while (T--) {
        string s;
        cin >> s;
        bool all_a = true;
        for (char c : s) if (c != 'a') { all_a = false; break; }
        if (all_a) {
            cout << "NO\n";
            continue;
        }
        string t1 = "a" + s;
        if (!is_pal(t1)) {
            cout << "YES\n" << t1 << '\n';
            continue;
        }
        string t2 = s + "a";
        cout << "YES\n" << t2 << '\n';
    }
    return 0;
}