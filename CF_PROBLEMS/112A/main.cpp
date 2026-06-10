#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string a, b;
    cin >> a >> b;

    for (char &c : a) c = tolower(c);
    for (char &c : b) c = tolower(c);

    if (a < b) cout << -1;
    else if (a > b) cout << 1;
    else cout << 0;

    return 0;
}