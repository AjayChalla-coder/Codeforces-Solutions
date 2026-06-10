#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

vector<int> toTernary(long long x) {
    if (x == 0) return {0};
    vector<int> v;
    while (x > 0) {
        v.push_back(x % 3);
        x /= 3;
    }
    return v;
}

int main() {
    fastio

    long long a, c;
    cin >> a >> c;

    vector<int> A = toTernary(a);
    vector<int> C = toTernary(c);

    int n = max(A.size(), C.size());
    A.resize(n, 0);
    C.resize(n, 0);

    vector<int> B(n);
    for (int i = 0; i < n; i++) {
        B[i] = (C[i] - A[i] + 3) % 3;
    }

    long long b = 0;
    long long p = 1;
    for (int i = 0; i < n; i++) {
        b += B[i] * p;
        p *= 3;
    }

    cout << b << '\n';

    return 0;
}