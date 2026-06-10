#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long s, m;
        cin >> n >> s >> m;
        long long l, r;
        long long prev = 0;
        bool possible = false;
        for (int i = 0; i < n; i++) {
            cin >> l >> r;
            if (l - prev >= s) {
                possible = true;
            }
            prev = r;
        }
        if (m - prev >= s) {
            possible = true;
        }
        cout << (possible ? "YES\n" : "NO\n");
    }
    return 0;
}