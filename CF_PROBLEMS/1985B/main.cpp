#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int best_x = 2;
        int best_sum = 0;

        for(int x = 2; x <= n; x++) {
            int k = n / x;
            int sum = x * k * (k + 1) / 2;

            if(sum > best_sum) {
                best_sum = sum;
                best_x = x;
            }
        }

        cout << best_x << "\n";
    }
}