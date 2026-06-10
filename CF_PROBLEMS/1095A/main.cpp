#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string t;
    cin >> t;
    string s="";
    int i=0, step=1;
    while (i < n) {
        s += t[i];
        i += step;
        step++;
    }
    cout << s << "\n";
}