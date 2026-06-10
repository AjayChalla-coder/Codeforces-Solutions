#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int main()
{
    string s; 
    cin >> s;
    
    for(int i = 0; i < (int)s.size(); i++)
    {
        char c = s[i];
        
        if(isVowel(c)||c == 'n') 
        {
            continue;
        }
        
        if (i + 1 == (int)s.size() || !isVowel(s[i + 1])) 
        {
            cout << "NO";
            return 0;
        }
    }
    
    cout << "YES" << "\n";
    return 0; 
}