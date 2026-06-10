#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;

    while (t--) 
    {
        int n;
        cin >> n;      
        
        string s;
        cin >> s;

        if (n != 5) {
            cout << "NO\n";
            continue;
        }

        for (int i = 0; i < 5; i++) {
            s[i] = tolower(s[i]);
        }

        int cnt_t = 0, cnt_i = 0, cnt_m = 0, cnt_u = 0, cnt_r = 0;

        for (int i = 0; i < 5; i++)
        {
            if (s[i] == 't') cnt_t++;
            else if (s[i] == 'i') cnt_i++;
            else if (s[i] == 'm') cnt_m++;
            else if (s[i] == 'u') cnt_u++;
            else if (s[i] == 'r') cnt_r++;
        }

        if (cnt_t == 1 && cnt_i == 1 && cnt_m == 1 && cnt_u == 1 && cnt_r == 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }

    return 0;
}
