#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    for(int i=0; i<8; i++)
    {
        string row; cin >> row;

           for (int j = 1; j < 8; j++) {
            if (row[j] == row[j - 1]) {
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES" << "\n";
    return 0;
}