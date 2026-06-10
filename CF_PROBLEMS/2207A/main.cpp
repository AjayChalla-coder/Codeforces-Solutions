#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int mn = 0, mx = 0;
        int i = 0;
        while (i < n) {
            while (i < n && s[i] == '0') i++;
            if (i == n) break;
            int l = i;
            int r = i;
            while (r + 1 < n && !(s[r] == '0' && s[r + 1] == '0')) r++;
            int last;
            if (s[r] == '1') last = r;
            else last = r - 1;
            int len = last - l + 1;
            mn += (len + 2) / 2;
            mx += len;
            i = r + 1;
        }
        cout << mn << ' ' << mx << '\n';
    }
    return 0;
}