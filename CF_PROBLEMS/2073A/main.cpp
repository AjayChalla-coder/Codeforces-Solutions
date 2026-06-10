#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> freq(n + 1, 0);

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        int score = 0;

        for(int i = 1; i <= n; i++)
            score += freq[i] / 2;

        cout << score << "\n";
    }
}