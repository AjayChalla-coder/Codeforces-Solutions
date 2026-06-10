#include <bits/stdc++.h>
using namespace std;
#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio
    string s;
    cin >> s;
    bool hasUpper = false, hasLower = false, hasDigit = false;
    for(char c : s)
    {
        if(isupper(c)) hasUpper = true;
        if(islower(c)) hasLower = true;
        if(isdigit(c)) hasDigit = true;
    }
    if(s.length()>=5 && hasUpper && hasLower && hasDigit) cout << "Correct" << "\n";
    else cout << "Too weak" << "\n";
    return 0;
}