#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    if (!(cin >> t)) return 0;
    while (t--) {
        int n;
        string log;
        cin >> n >> log;
        vector<int> cnt(26, 0);
        for (char c : log) cnt[c - 'A']++;
        int solved = 0;
        for (int i = 0; i < 26; ++i) if (cnt[i] >= i + 1) ++solved; 
        cout << solved << '\n';
    }
    return 0;
}