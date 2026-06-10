#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio
    int n; cin >> n;
    unordered_map<int, int> cnt;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        cnt[x]++;
    }
    int totalpairs = 0;
    for(auto &p : cnt)
    {
        totalpairs += p.second / 2;
    }
    cout << totalpairs << "\n";
    return 0;
}