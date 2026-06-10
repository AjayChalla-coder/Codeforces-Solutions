#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        if(a + (c % 2) > b)
            cout << "First\n";
        else
            cout << "Second\n";
    }
}