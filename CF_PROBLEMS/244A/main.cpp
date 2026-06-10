#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(k);
    vector<bool> used(n * k + 1, false);

    for (int i = 0; i < k; i++) {
        cin >> a[i];
        used[a[i]] = true;
    }

    vector<int> rest;
    for (int i = 1; i <= n * k; i++) {
        if (!used[i]) rest.push_back(i);
    }

    int ptr = 0;
    for (int i = 0; i < k; i++) {
        cout << a[i] << " ";

        for (int j = 0; j < n - 1; j++) {
            cout << rest[ptr++] << " ";
        }
        cout << "\n";
    }

    return 0;
}
