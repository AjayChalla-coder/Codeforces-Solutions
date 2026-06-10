#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n == 0) {
        cout << "O-|-OOOO\n";
        return 0;
    }
    while (n > 0) {
        int d = n % 10;
        n /= 10;
        if (d >= 5) {
            cout << "-O|";
            d -= 5;
        } else {
            cout << "O-|";
        }
        cout << string(d, 'O');
        cout << "-";
        cout << string(4 - d, 'O');
        cout << "\n";
    }
    return 0;
}