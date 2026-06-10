#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio
    int a, b;
    cin >> a >> b;
    int hours = 0;
    int burned = 0;
    int candles = a;
    while(candles > 0)
    {
        hours += candles;
        burned += candles;
        candles = burned / b;
        burned %= b;
    }   
    cout << hours << "\n";
    return 0;
}