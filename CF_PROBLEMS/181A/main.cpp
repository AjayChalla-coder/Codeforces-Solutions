#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> rows, cols;

    for (int i = 1; i <= n; i++) {
        string s;
        cin >> s;
        for (int j = 1; j <= m; j++) {
            if (s[j-1] == '*') {
                rows.push_back(i);
                cols.push_back(j);
            }
        }
    }

    int r, c;

    if (rows[0] == rows[1])
        r = rows[2];
    else if (rows[0] == rows[2])
        r = rows[1];
    else
        r = rows[0];

    if (cols[0] == cols[1])
        c = cols[2];
    else if (cols[0] == cols[2])
        c = cols[1];
    else
        c = cols[0];

    cout << r << " " << c << '\n';
    return 0;
}
