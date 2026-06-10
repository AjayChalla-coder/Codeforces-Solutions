#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        int n = s.length();

        if(n % 2 == 1)
        {
            cout << "NO" << "\n";
            continue;
        }

        int k = true;

        for (int i = 0; i < n / 2; i++) {
            if (s[i] != s[i + n / 2]) {
                k = false;
                break;
            }
        }

        if(k) cout << "YES" << "\n";
        else cout << "NO" << "\n";

    }    
    return 0;
}