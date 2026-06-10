#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    string s;
    cin >> s;
    
    int n;
    cin >> n;

    string best = "";

    for(int i=0; i<n; i++)
    {
        string w;
        cin >> w;
        if(w.size() >= s.size() && w.substr(0, s.size()) == s)
        {
            if(best.empty() || w < best)
            {
                best = w;
            }
        }
    }

    if(best.empty()) cout << s << '\n';
    else cout << best << '\n'; 
    return 0;
}