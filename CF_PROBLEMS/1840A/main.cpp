#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        string ans;
        int i = 0;
        while (i < n) {
            char c = s[i];
            ans.push_back(c);
            int j = i + 1;
            while (j < n && s[j] != c) ++j;
            if (j >= n) break;
            i = j + 1;
        }
        cout << ans << '\n';
    }
    return 0;
}