#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long l;
    cin >> n >> l;

    vector<long long> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a.begin(), a.end());

    double max_gap = 0;

    for(int i = 0; i < n - 1; i++) {
        max_gap = max(max_gap, (a[i+1] - a[i]) / 2.0);
    }

    double start_gap = a[0];
    double end_gap = l - a[n-1];

    double result = max({start_gap, end_gap, max_gap});

    cout << fixed << setprecision(10) << result << endl;

    return 0;
}