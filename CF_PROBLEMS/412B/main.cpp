#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int answer = 0;

    for (int i = 0; i < n; i++) {
        int count = n - i;  
        if (count >= k) {
            answer = a[i];
        }
    }

    cout << answer;
    return 0;
}
