#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        int n;
        string s;
        cin >> n >> s;

        int balance = 0;
        int moves = 0;

        for(char c : s) {
            if(c == '(')
                balance++;
            else
                balance--;

            if(balance < 0) {
                moves++;
                balance = 0;
            }
        }

        cout << moves << "\n";
    }
}