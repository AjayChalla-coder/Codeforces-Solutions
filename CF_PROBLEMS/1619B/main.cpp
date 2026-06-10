#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        long long sq = sqrt(n);
        long long cu = cbrt(n);
        long long sixth = pow(n, 1.0/6);
        while ((sq+1)*(sq+1) <= n) sq++;
        while (sq*sq > n) sq--;
        while ((cu+1)*(cu+1)*(cu+1) <= n) cu++;
        while (cu*cu*cu > n) cu--;
        while (pow(sixth+1, 6) <= n) sixth++;
        while (pow(sixth, 6) > n) sixth--;
        cout << sq+cu-sixth << '\n';
    }
}