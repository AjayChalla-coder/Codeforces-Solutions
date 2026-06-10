#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string target = "heidi";
    int j = 0;

    for (char c : s) {
        if (c == target[j]) {
            j++;
            if (j == target.size())
                break;
        }
    }

    if (j == target.size())
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}