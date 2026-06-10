#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n, k; cin >> n >> k;

    long long red   = (2*n + k - 1) / k;
    long long green = (5*n + k - 1) / k;
    long long blue  = (8*n + k - 1) / k;

    cout << red + green + blue << "\n";
    return 0;
}