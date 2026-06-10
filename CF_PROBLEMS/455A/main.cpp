#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    const int MAX = 100000;
    vector<long long> freq(MAX + 1, 0);

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }

    vector<long long> dp(MAX + 1, 0);

    dp[1] = freq[1] * 1;

    for(int i = 2; i <= MAX; i++) {
        dp[i] = max(dp[i-1], dp[i-2] + freq[i] * i);
    }

    cout << dp[MAX] << endl;

    return 0;
}