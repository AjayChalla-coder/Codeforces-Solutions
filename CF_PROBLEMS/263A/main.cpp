#include <bits/stdc++.h>
using namespace std;

int main()
{
    int row = 0, col = 0;
    
    for(int i = 1; i <= 5; i++)
    {
        for(int j = 1; j <= 5; j++)
        {
            int x; 
            cin >> x;
            
            if(x == 1)
            {
                row = i;
                col = j;
            }
        }
    }
    int m = abs(row - 3) + abs(col - 3);
    
    cout << m << "\n";
    
    return 0;
}