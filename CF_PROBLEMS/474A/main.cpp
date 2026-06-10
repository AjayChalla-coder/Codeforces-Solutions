#include <bits/stdc++.h>
using namespace std;

int main()
{
    char dir;
    string s;
    cin >> dir >> s;
    string kb  = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string ans;
    for(char c:s)
    {
        int pos = kb.find(c);
        if(dir == 'R')
            ans += kb[pos-1];
        else 
            ans += kb[pos+1];
    }
    cout << ans << '\n';
    return 0;
}