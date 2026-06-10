#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> freq(n + 1, 0);

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x >= 0 && x <= n)
                freq[x]++;
        }

        int keep = 0;

        for (int v = 1; v <= n; v++) {
            if (freq[v] >= v) {
                keep += v;
            }
        }

        cout << n - keep << "\n";
    }

    return 0;
}