#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    int nCnt = 0;
    int zCnt = 0;
    long long coins = 0;

    for(int i=0; i<n; i++)
    {
        int x; cin >> x;

        if(x > 0) 
        {coins += (x-1);}
        else if(x < 0)
        {coins += (-1 - x);
            nCnt++;}
        else
        {coins += 1;
            zCnt++;}
    }

    if(nCnt % 2 == 1)
    {
        if(zCnt == 0)
        {
            coins += 2;
        }
    }

    cout << coins << "\n";
    return 0;
}