#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int need = 5 * n - k;

    int answer;
    if (need <= 2 * n)
        answer = 0;
    else
        answer = need - 2 * n;

    cout << answer << '\n';
    return 0;
}
