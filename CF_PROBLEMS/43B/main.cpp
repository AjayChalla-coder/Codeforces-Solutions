#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    getline(cin, s);
    getline(cin, t);

    unordered_map<char, int> freq;

    for (char c : s) {
        if (c != ' ')
            freq[c]++;
    }

    for (char c : t) {
        if (c == ' ')
            continue;
        if (freq[c] == 0) {
            cout << "NO\n";
            return 0;
        }
        freq[c]--;
    }

    cout << "YES\n";
    return 0;
}
