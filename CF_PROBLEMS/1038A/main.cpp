#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'A']++;
    }
    int mn = INT_MAX;
    for (int i = 0; i < k; i++) {
        mn = min(mn, freq[i]);
    }
    cout << mn * k << endl;
    return 0;
}