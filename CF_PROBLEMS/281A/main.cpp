#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    // Capitalize first character
    s[0] = toupper(s[0]);

    cout << s;
    return 0;
}