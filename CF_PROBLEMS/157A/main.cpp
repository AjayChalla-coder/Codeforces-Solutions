#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[31][31];
    int row[31] = {0};
    int col[31] = {0};

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            row[i] += a[i][j];
            col[j] += a[i][j];
        }
    }

    int winning = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(col[j] > row[i])
                winning++;
        }
    }

    cout << winning;
}