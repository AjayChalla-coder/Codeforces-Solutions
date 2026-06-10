#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x; 
    cin >> x;
    x = llabs(x); // llabs() instead of abs() because x is long long
    
    if(x == 0)
    {
        cout << "0" << "\n";
        return 0; // code ends
    }
    
    long long n = 0, y = 0;
    while(true)
    {
        n++ ;
        y += n;
        if(y >= x && (y - x) % 2 == 0)
        {
            cout << n;
            return 0;
        }
    }
}