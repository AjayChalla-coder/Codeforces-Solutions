#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    string n; cin >> n;

    int steps = 0;

    while(n.size() > 1)
    {
        int sum = 0;
        for(char c : n)
        {
            sum += c - '0';
        }
        n = to_string(sum);
        steps++;
    }
    cout << steps << "\n";
    return 0;
}