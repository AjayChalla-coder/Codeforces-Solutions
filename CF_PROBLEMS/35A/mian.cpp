#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int pos;
    cin >> pos;

    for (int i = 0; i < 3; i++) {
        int a, b;
        cin >> a >> b;

        if (pos == a) pos = b;
        else if (pos == b) pos = a;
    }

    cout << pos << endl;
    return 0;
}
