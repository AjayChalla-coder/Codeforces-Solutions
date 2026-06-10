#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];

        vector<bool> visited(n + 1, false);
        bool possible = true;

        for (int i = 1; i <= n; i++) {

            if (visited[i]) continue;

            vector<int> indices;
            vector<int> values;

            int current = i;

            while (current <= n && !visited[current]) {
                visited[current] = true;
                indices.push_back(current);
                values.push_back(a[current]);
                current = 2 * current;
            }

            sort(indices.begin(), indices.end());
            sort(values.begin(), values.end());

            for (int j = 0; j < indices.size(); j++) {
                if (indices[j] != values[j]) {
                    possible = false;
                    break;
                }
            }

            if (!possible) break;
        }

        cout << (possible ? "YES\n" : "NO\n");
    }

    return 0;
}
