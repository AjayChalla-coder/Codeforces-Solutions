#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int n;
    cin >> n;
    
    int chest = 0, biceps = 0, back = 0;
    for(int i = 0; i < n; i++)
    {
        int x; 
        cin >> x;
        if (i % 3 == 0)
            chest += x;
        else if (i % 3 == 1)
            biceps += x;
        else
            back += x;
    }

    if(chest > biceps && chest > back)
    {
        cout << "chest" << '\n';
    }
    else if(biceps > chest && biceps > back)
    {
        cout << "biceps" << '\n';
    }
    else cout << "back" << "\n";
    return 0;
}