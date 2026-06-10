#include <bits/stdc++.h>
using namespace std;

int main() {
    int Y, W;
    cin >> Y >> W;

    int M = max(Y, W);
    int A = 7 - M;   
    int B = 6;       

    int g = __gcd(A, B);
    A /= g;
    B /= g;

    cout << A << "/" << B << "\n";
    return 0;
}
