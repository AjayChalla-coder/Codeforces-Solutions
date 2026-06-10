#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    vector<int> need ={5, 7, 5};

    for(int i=0; i<3; i++)
    {
        string s;
        getline(cin, s);

        int cnt = 0;
        for(char c:s)
        {
            if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') cnt++;
        }

        if(cnt != need[i])
        {
            cout << "NO" << "\n";
            return 0;
        }
    }
    cout << "YES" << "\n";
    return 0;
}