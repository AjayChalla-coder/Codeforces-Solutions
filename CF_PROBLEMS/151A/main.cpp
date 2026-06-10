#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    long long drink_toasts = (k * l) / nl;
    long long lime_toasts  = c * d;
    long long salt_toasts  = p / np;

    long long total = min({drink_toasts, lime_toasts, salt_toasts});
    cout << total / n << endl;
}

