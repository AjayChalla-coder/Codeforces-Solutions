#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b;
        cin >> a >> b;

        long long remainder = a % b;

        long long k;
        if (remainder == 0) {
            k = 0;      
        } else {
            k = b - remainder;   
        }

        cout << k << "\n";
    }

    return 0;
}
