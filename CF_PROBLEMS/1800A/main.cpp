#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        for (char &c : s) c = tolower(c);
        string t = "";
        for (int i = 0; i < n; i++) {
            if (i == 0 || s[i] != s[i - 1]) {
                t += s[i];
            }
        }
        if(t == "meow") cout << "yes" << '\n';
        else cout << "no" << '\n';
    }
}