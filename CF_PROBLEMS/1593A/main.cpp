#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;

        long long A = max(0LL, max(b, c) - a + 1);
        long long B = max(0LL, max(a, c) - b + 1);
        long long C = max(0LL, max(a, b) - c + 1);

        cout << A << " " << B << " " << C << endl;
    }

    return 0;
}