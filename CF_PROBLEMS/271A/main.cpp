#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin >> y;

    while(true)
    {
        y++;
        string s = to_string(y);

        bool dis = true;

        for(int i = 0; i < s.size(); i++)
        {
            for(int j = i + 1; j < s.size(); j++)
            {
                if(s[i] == s[j])
                {
                    dis = false;
                }
            }
        }
        if(dis) 
        {
            cout << y << "\n";
            break;
        }
    }
    return 0;
}