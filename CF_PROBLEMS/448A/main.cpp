#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    int b1, b2, b3;
    cin >> b1 >> b2 >> b3;
    int n;
    cin >> n;
    int cups = a1 + a2 + a3;
    int medals = b1 + b2 + b3;
    int shelves_for_cups = (cups + 4) / 5;
    int shelves_for_medals = (medals + 9) / 10;
    if(shelves_for_cups + shelves_for_medals <= n)
    {
        cout << "YES" << '\n';
    }
    else
    {
        cout << "NO" << "\n";
    }
    return 0;
}