#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int oddCount = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x % 2 != 0)
                oddCount++;
        }

        if (oddCount == 0) {
            cout << "NO\n";
        }
        else if (oddCount == n) {
            if (n % 2 == 1)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
        else {
            cout << "YES\n";
        }
    }

    return 0;
}