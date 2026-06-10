#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;
    unordered_map<string,int> mp;
    mp.reserve(n * 2);

    while (n--) {
        string s;
        cin >> s;

        auto it = mp.find(s);
        if (it == mp.end()) {
            cout << "OK\n";
            mp[s] = 1; 
        } else {
            int k = it->second;            
            string candidate;
            while (true) {
                candidate = s + to_string(k);
                if (mp.find(candidate) == mp.end()) break;
                ++k;
            }
            cout << candidate << '\n';
            mp[s] = k + 1;     
            mp[candidate] = 1; 
        }
    }
    return 0;
}