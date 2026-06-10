#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    int n; cin >> n; 
    set<string> alcohol = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE",
         "GIN", "RUM", "SAKE", "TEQUILA", "VODKA",
          "WHISKEY", "WINE"};

    int ref = 0;

    for(int i=0; i<n; i++)
    {
        string s;
        cin >> s;
        if(isdigit(s[0]))
        {
            int age = stoi(s);
            if (age < 18) ref++;
        }
        else{
            if(alcohol.count(s)) ref++;
        }
    }
    cout << ref << "\n";
    return 0;
}
