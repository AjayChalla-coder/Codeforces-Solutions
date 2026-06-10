#include <iostream>
#include <string>
using namespace std;
int countAB(const string &s) {
    int cnt = 0;
    for (size_t i = 0; i + 1 < s.size(); ++i)
        if (s[i] == 'a' && s[i+1] == 'b') ++cnt;
    return cnt;
}
int countBA(const string &s) {
    int cnt = 0;
    for (size_t i = 0; i + 1 < s.size(); ++i)
        if (s[i] == 'b' && s[i+1] == 'a') ++cnt;
    return cnt;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        string s; 
        cin >> s;
        int ab = countAB(s), ba = countBA(s);
        if (ab == ba) {
            cout << s << '\n';
            continue;
        }
        bool printed = false;
        int n = (int)s.size();
        for (int i = 0; i < n && !printed; ++i) {
            char orig = s[i];
            for (char c : {'a','b'}) {
                if (c == orig) continue;
                s[i] = c;
                if (countAB(s) == countBA(s)) {
                    cout << s << '\n';
                    printed = true;
                    break;
                }
            }
            s[i] = orig; 
        }
        if (!printed) {
            s[0] = (s[0] == 'a' ? 'b' : 'a');
            cout << s << '\n';
        }
    }
    return 0;
}