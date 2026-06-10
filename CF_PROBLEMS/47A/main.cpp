#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for (int k = 1; sum < n; k++) {
        sum += k;
        if (sum == n) {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
    return 0;
}
