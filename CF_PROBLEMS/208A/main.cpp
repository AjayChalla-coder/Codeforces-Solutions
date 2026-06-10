#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "";
    for (int i = 0; i < s.size(); ) {
        // If we see "WUB", skip it
        if (i + 2 < s.size() && s.substr(i, 3) == "WUB") {
            // Add space only if not already added
            if (!ans.empty() && ans.back() != ' ')
                ans += ' ';
            i += 3;
        } else {
            ans += s[i];
            i++;
        }
    }

    cout << ans << "\n";
    return 0;
}
