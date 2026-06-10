#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int even_count = 0, odd_count = 0;

        for (int i = 0; i < 2 * n; i++) {
            int x;
            cin >> x;
            if (x % 2 == 0)
                even_count++;
            else
                odd_count++;
        }

        if (even_count == odd_count)
            cout << "Yes\n";
        else
            cout << "No\n";
    }

    return 0;
}