#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    int n, m;
    cin >> n >> m;
    vector<int> b(m);
    for(int i=0; i<n; i++) cin >> b[i];
    vector<int> ans(n + 1, 0); 
    for (int btn : b) {
        for (int light = btn; light <= n; light++) {
            if (ans[light] == 0) {
                ans[light] = btn;
            }
        }
    }
    for (int i = 1; i <= n; i++) cout << ans[i] << " ";
    return 0;
}