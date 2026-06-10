#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    char mx = 'a';
    for (char c : s) {
        mx = max(mx, c);
    }

    for (char c : s) {
        if (c == mx)
            cout << c;
    }

    return 0;
}
