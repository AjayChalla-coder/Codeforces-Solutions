#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1000000;
vector<bool> isPrime(MAXN + 1, true);

void sieve()
{
    isPrime[0] = isPrime[1] = false;
    for (long long i = 2; i * i <= MAXN; i++) {
        if (isPrime[i]) {
            for (long long j = i * i; j <= MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main()
{
    sieve();
    int n;
    cin >> n;
    while(n--)
    {
        long long x;
        cin >> x;
        if(x < 4)
        {
            cout << "NO\n";
            continue;
        } 
        long long root = sqrt(x);
        if(root * root == x && isPrime[root])
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}