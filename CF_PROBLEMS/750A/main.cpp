#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int available = 240 - k;
    int timeSpent = 0;
    int solved = 0;

    for (int i = 1; i <= n; i++) {
        timeSpent += 5 * i;
        if (timeSpent <= available) {
            solved++;
        } else {
            break;
        }
    }

    cout << solved;
    return 0;
}