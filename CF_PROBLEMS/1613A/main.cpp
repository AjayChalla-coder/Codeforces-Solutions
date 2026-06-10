#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int x1, p1, x2, p2;
        cin >> x1 >> p1;
        cin >> x2 >> p2;

        string s1 = to_string(x1);
        string s2 = to_string(x2);

        int len1 = s1.size() + p1;
        int len2 = s2.size() + p2;

        if (len1 > len2) {
            cout << ">\n";
        } 
        else if (len1 < len2) {
            cout << "<\n";
        } 
        else {
            int need = abs(p1 - p2);

            if (p1 < p2) {
                s1 += string(min(need, 7), '0');
            } else {
                s2 += string(min(need, 7), '0');
            }

            while (s1.size() < s2.size()) s1 += '0';
            while (s2.size() < s1.size()) s2 += '0';

            if (s1 > s2) cout << ">\n";
            else if (s1 < s2) cout << "<\n";
            else cout << "=\n";
        }
    }

    return 0;
}