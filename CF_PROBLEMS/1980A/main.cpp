#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        string s;
        cin >> s;

        vector<int> freq(7, 0); // A-G

        for (char c : s) {
            freq[c - 'A']++;
        }

        int needed = 0;

        for (int i = 0; i < 7; i++) {
            if (freq[i] < m) {
                needed += (m - freq[i]);
            }
        }

        cout << needed << "\n";
    }

    return 0;
}