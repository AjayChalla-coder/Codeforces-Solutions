#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    vector<string> cake(r);
    for (int i = 0; i < r; i++) {
        cin >> cake[i];
    }

    vector<bool> safeRow(r, true);
    vector<bool> safeCol(c, true);

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (cake[i][j] == 'S') {
                safeRow[i] = false;
                safeCol[j] = false;
            }
        }
    }

    int eaten = 0;
    vector<vector<bool>> used(r, vector<bool>(c, false));

    for (int i = 0; i < r; i++) {
        if (safeRow[i]) {
            for (int j = 0; j < c; j++) {
                if (!used[i][j]) {
                    eaten++;
                    used[i][j] = true;
                }
            }
        }
    }

    for (int j = 0; j < c; j++) {
        if (safeCol[j]) {
            for (int i = 0; i < r; i++) {
                if (!used[i][j]) {
                    eaten++;
                    used[i][j] = true;
                }
            }
        }
    }

    cout << eaten << endl;
    return 0;
}
