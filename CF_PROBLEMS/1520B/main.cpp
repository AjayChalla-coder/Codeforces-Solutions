#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        int count = 0;

        for (int d = 1; d <= 9; d++) {
            long long x = d;
            while (x <= n) {
                count++;
                x = x * 10 + d;   
            }
        }

        cout << count << "\n";
    }
}