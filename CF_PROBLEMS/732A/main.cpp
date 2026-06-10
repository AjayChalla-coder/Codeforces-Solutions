#include <bits/stdc++.h>
using namespace std;


int main()
{
    int k, r;
    cin >> k >> r;
    
    for(int y = 1; ; y++)
    {
        int cost = k * y;
        int last = cost % 10;
        if(last == 0 || last == r)
        {
            cout << y;
            return 0;
        }
    }
}