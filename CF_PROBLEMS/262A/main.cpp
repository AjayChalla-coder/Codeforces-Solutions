#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int ans = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;

        int lucky = 0;
        for (char c : s) {
            if (c == '4' || c == '7')
                lucky++;
        }

        if (lucky <= k)
            ans++;
    }

    cout << ans << "\n";
    return 0;
}