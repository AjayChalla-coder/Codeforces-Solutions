#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int dfd = min(a, b);
    int r = abs(a - b);
    int sd = r / 2;

    cout << dfd << " " << sd;
    return 0;
}