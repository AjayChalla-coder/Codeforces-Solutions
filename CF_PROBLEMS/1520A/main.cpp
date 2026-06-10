#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        set<char> seen;
        bool ok = true;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i-1])
            {
                seen.insert(s[i-1]);
                if (seen.count(s[i]))
                {
                    ok = false;
                    break;
                }
            }
        }
        cout << (ok ? "YES" : "NO") << "\n";
    }
}