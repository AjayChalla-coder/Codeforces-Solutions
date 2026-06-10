#include <iostream>
#include <cctype>
using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    return (c=='a' || c=='o' || c=='y' || c=='e' || c=='u' || c=='i');
}

int main() {
    string s;
    cin >> s;

    string result = "";
    
    for (char c : s) {
        char lower = tolower(c);
        if (!isVowel(lower)) {
            result += '.';
            result += lower;
        }
    }

    cout << result;
    return 0;
}