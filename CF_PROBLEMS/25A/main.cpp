#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[101];
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    if (evenCount == 1) {
        
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 0) {
                cout << i + 1;
                break;
            }
        }
    } else {
        
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 != 0) {
                cout << i + 1;
                break;
            }
        }
    }

    return 0;
}
