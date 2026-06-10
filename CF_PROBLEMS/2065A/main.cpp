#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string w;
        cin >> w;
        w.erase(w.end() - 2, w.end());
        w += 'i';

        cout << w << '\n';
    }
    return 0;
}
