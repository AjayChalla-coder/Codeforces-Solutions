// FILENAME: FOOTBALL_43A.cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    string team1 = "", team2 = "";
    int score1 = 0, score2 = 0;

    while (n--) {
        string s;
        cin >> s;

        if (team1.empty()) {
            team1 = s;
            score1++;
        } else if (s == team1) {
            score1++;
        } else {
            if (team2.empty()) team2 = s;
            score2++;
        }
    }

    cout << (score1 > score2 ? team1 : team2) << "\n";
    return 0;
}
