#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    int upperCount = 0, lowerCount = 0;

    // Count upper vs lower
    for (char c : s) {
        if (isupper(c))
            upperCount++;
        else
            lowerCount++;
    }

    // Convert accordingly
    for (char &c : s) {
        if (upperCount > lowerCount)
            c = toupper(c);
        else
            c = tolower(c);
    }

    cout << s;
    return 0;
}