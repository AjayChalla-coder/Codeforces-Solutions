#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    int ans = 0;

    for (int i = 0; i < n; ) {
        int j = i;
        while (j < n && s[j] == s[i]) {
            j++;
        }
        int len = j - i;
        ans += (len + 4) / 5; 
        i = j;
    }

    cout << ans << '\n';
    return 0;
}
