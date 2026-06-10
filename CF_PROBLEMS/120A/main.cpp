#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string door;
    int rail;
    cin >> door >> rail;

    if ((door == "front" && rail == 1) || (door == "back" && rail == 2))
        cout << "L\n";
    else
        cout << "R\n";

    return 0;
}