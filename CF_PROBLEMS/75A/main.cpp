#include <bits/stdc++.h>
using namespace std;

int removeZeros(long long x) {
    string s = to_string(x);
    string t = "";
    for (char c : s) {
        if (c != '0') t += c;
    }
    return t.empty() ? 0 : stoi(t);
}

int main() {
    long long a, b;
    cin >> a >> b;

    long long c = a + b;

    if (removeZeros(a) + removeZeros(b) == removeZeros(c))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}