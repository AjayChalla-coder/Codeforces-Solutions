#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    
    int eli = 0;
    
    for(int i = 0; i < n; i++)
    {
        int x; 
        cin >> x;
        
        if(k + x <= 5)
        {
            eli++;
        }
    }
    int teams = eli / 3;
    
    cout << teams << "\n";
}