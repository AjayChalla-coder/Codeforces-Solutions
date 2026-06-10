#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    if (!(cin >> n)) return 0;
    int mishka = 0, chris = 0;

    for (int i = 0; i < n; ++i) 
    {
        int m, c;
        cin >> m >> c;
        if (m > c) ++mishka;
        else if (m < c) ++chris;
    }
    if (mishka > chris) cout << "Mishka\n";
    else if (chris > mishka) cout << "Chris\n";
    else cout << "Friendship is magic!^^\n";
    return 0;
}