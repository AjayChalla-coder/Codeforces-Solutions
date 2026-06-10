#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    vector<int> a(12);
    for (int i=0; i<12; i++) cin >> a[i];
    if (k==0) {
        cout << 0 << endl;
        return 0;
    }
    sort(a.rbegin(), a.rend()); 
    int sum=0, count=0;
    for (int i=0; i<12; i++) {
        sum+=a[i];
        count++;
        if (sum>=k) {
            cout << count << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}