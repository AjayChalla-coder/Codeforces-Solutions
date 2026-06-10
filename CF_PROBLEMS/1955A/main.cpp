#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        int pairs = n / 2;
        int leftover = n % 2;

        int cost = pairs * min(2 * a, b) + leftover * a;
        cout << cost << '\n';
    }
    return 0;
}
