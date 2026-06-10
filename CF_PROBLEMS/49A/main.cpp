#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    string s; 
    getline(cin, s);

    for(int i = s.size() - 1; i >= 0; i--)
    {
        if(isalpha(s[i]))
        {
            char c = tolower(s[i]);
            if(string("aeiouy").find(c) != string::npos) cout << "YES" << "\n";
            else cout << "NO" << "\n";
            break;
        }
    }
    return 0;
}