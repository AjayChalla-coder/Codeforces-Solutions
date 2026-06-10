#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        int evenWrong = 0, oddWrong = 0;

        for (int i = 0; i < n; i++) {
            if (i % 2 != a[i] % 2) {
                if (i % 2 == 0) evenWrong++;
                else oddWrong++;
            }
        }

        if (evenWrong == oddWrong) cout << evenWrong << "\n";
        else cout << -1 << "\n";
    }
    system("pause");
    return 0;
}