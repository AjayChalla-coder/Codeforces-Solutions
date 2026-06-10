#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a, b;
    cin >> n >> a >> b;

    int unserved = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 1) {
            if (a > 0) a--;
            else unserved++;
        } 
        else { 
            if (b > 0) b--;
            else if (a > 0) a--;
            else unserved++;
        }
    }

    cout << unserved << '\n';
    return 0;
}
