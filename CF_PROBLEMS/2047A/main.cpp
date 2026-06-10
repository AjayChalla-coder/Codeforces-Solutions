#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int happy = 0;
        int total = 0;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            total += x;

            int s = sqrt(total);

            if(s * s == total && s % 2 == 1)
                happy++;
        }

        cout << happy << "\n";
    }
}