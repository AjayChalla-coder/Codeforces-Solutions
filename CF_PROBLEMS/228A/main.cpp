#include <iostream>
using namespace std;

int main() {
    int a[4];

    // read 4 numbers
    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }

    int distinctCount = 0;

    for (int i = 0; i < 4; i++) {
        bool seenBefore = false;
        for (int j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                seenBefore = true;
                break;
            }
        }
        if (!seenBefore) {
            distinctCount++;
        }
    }

    int need = 4 - distinctCount;
    cout << need << "\n";

    return 0;
}
