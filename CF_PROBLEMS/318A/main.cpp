#include <iostream>
using namespace std;

int main()
{
    long long n, k;
    cin >> n >> k;
    long long oddcount = (n+1) / 2;
    if(k<=oddcount) cout << 2 * k - 1 << '\n';
    else cout << 2 * (k - oddcount) << '\n';
    return 0;
}