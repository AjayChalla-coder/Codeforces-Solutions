#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    if(n <= 2) {
        cout << -1;
        return 0;
    }
    cout << "3 2 1 ";
    for(int i = 4; i <= n; i++)
        cout << i << " ";
}