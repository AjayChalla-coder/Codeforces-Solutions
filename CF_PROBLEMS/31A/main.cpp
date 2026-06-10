#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i) continue;
            for (int k = 0; k < n; k++) {
                if (k == i || k == j) continue;

                if (a[i] == a[j] + a[k]) {
                    cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
                    return 0;
                }
            }
        }
    }
    cout << -1 << "\n";
    return 0;
}