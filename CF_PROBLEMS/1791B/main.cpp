#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int x = 0, y = 0;
        bool found = false;

        for (char c : s) {
            if (c == 'L') x--;
            else if (c == 'R') x++;
            else if (c == 'U') y++;
            else if (c == 'D') y--;

            if (x == 1 && y == 1) {
                found = true;
            }
        }

        if (found) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}