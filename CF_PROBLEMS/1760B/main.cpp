#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        char maxChar = 'a';
        for (char c : s) {
            if (c > maxChar) maxChar = c;
        }
        cout << (maxChar-'a'+1) << endl;
    }
    return 0;
}