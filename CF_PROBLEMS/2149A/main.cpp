#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        int z = 0, ne = 0;
        for(int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x == 0) z++;
            else if(x == -1) ne++;
        }

        int op = z;              
        if(ne % 2 == 1) op += 2; 

        cout << op << "\n";     
    }
    return 0;
}
