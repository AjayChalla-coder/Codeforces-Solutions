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
        if(n % 4 != 0) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";
        int k = n / 2;
        long long sum_even = 0, sum_odd = 0;
        for(int i = 1; i <= k; i++) {
            int val = 2 * i;
            cout << val << " ";
            sum_even += val;
        }
        for(int i = 1; i < k; i++) {
            int val = 2 * i - 1;
            cout << val << " ";
            sum_odd += val;
        }
        cout << sum_even - sum_odd << "\n";
    }
}