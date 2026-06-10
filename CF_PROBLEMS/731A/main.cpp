#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int rotations = 0;
    int cur = 0; // 'a' -> 0

    for (char c : s) {
        int next = c - 'a';
        int diff = abs(cur - next);
        rotations += min(diff, 26 - diff);
        cur = next;
    }

    cout << rotations << '\n';
    return 0;
}
