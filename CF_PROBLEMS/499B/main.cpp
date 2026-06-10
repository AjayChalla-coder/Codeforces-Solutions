#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    unordered_map<string, string> mp;
    for(int i=0; i<m; i++)
    {
        string a, b;
        cin >> a >> b;
        if (b.length()<a.length()) {
            mp[a]=b;
        } else {
            mp[a]=a;
        }
    }
    for(int i=0; i<n; i++)
    {
        string word;
        cin >> word;
        cout << mp[word] << " ";
    }
    return 0;
}