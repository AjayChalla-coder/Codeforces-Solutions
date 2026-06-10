#include <bits/stdc++.h>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        vector<int> x(4), y(4);
        for (int i = 0; i < 4; i++) cin >> x[i] >> y[i];

        sort(x.begin(), x.end());
        sort(y.begin(), y.end());

        int width  = x[3] - x[0];
        int height = y[3] - y[0];

        cout << width * height << "\n";
    }

    return 0;
}