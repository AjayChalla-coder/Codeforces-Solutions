#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int countAlmostPrime = 0;
    for (int i = 2; i <= n; i++) {
        int temp = i;
        int distinctPrimes = 0;
        for (int p = 2; p * p <= temp; p++) {
            if (temp % p == 0) {
                distinctPrimes++;
                while (temp % p == 0) {
                    temp /= p;
                }
            }
        }
        if (temp > 1) {
            distinctPrimes++;
        }
        if (distinctPrimes == 2) {
            countAlmostPrime++;
        }
    }
    cout << countAlmostPrime << endl;
    return 0;
}
