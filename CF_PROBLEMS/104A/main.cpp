#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    int n;
    cin >> n;

    
    if (n < 2 || n > 21) {
        cout << 0 << '\n';
    } 
    else if (n == 21) {
        cout << 8 << '\n';
    } 
    else if (n == 20) {
        cout << 18 << '\n';
    } 
    else if (n == 11) {
        cout << 0 << '\n';
    } 
    else if (n >= 12 && n <= 19) {
        cout << 4 << '\n';
    } 
    else {
        cout << 0 << '\n';
    }

    return 0;
}