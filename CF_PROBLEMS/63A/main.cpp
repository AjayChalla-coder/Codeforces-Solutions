#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);
#define ll long long

int main() {
    fastio

    int n;
    cin >> n;

    vector<string> rats, women_children, men, captain;

    for (int i = 0; i < n; i++) {
        string name, status;
        cin >> name >> status;

        if (status == "rat") {
            rats.push_back(name);
        } 
        else if (status == "woman" || status == "child") {
            women_children.push_back(name);
        } 
        else if (status == "man") {
            men.push_back(name);
        } 
        else { // captain
            captain.push_back(name);
        }
    }

    for (auto &x : rats) cout << x << '\n';
    for (auto &x : women_children) cout << x << '\n';
    for (auto &x : men) cout << x << '\n';
    for (auto &x : captain) cout << x << '\n';

    return 0;
}