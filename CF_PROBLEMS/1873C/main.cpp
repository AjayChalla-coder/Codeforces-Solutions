#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        char grid[10][10];
        int total = 0;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> grid[i][j];
            }
        }

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (grid[i][j] == 'X') {
                    int ring = min(min(i, j), min(9 - i, 9 - j));
                    total += (ring + 1);
                }
            }
        }

        cout << total << endl;
    }

    return 0;
}