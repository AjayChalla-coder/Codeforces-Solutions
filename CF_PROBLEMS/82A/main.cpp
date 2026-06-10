#include <iostream>
#include <string>
using namespace std;

int main() {
    long long n;
    cin >> n;

    string names[5] = {
        "Sheldon",
        "Leonard",
        "Penny",
        "Rajesh",
        "Howard"
    };

    long long blockSize = 1;

    while (n > 5 * blockSize) {
        n -= 5 * blockSize;
        blockSize *= 2;
    }

    int index = (n - 1) / blockSize;
    cout << names[index] << "\n";

    return 0;
}
