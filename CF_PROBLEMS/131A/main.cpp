#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    string s;
    cin >> s;
    
    bool ok = true;
    for(int i = 1; i < (int)s.size(); i++)
    {
        if(islower(s[i]))
        {
            ok = false;
            break;
        }
    }
    if (ok) {
        for (char &c : s) {
            if (islower(c)) c = toupper(c);
            else c = tolower(c);
        }
    }

    cout << s << '\n';
    return 0;
}