#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    int left = 0, right = n - 1;
    int sereja = 0, dima = 0;
    bool turn = true; // true = Sereja, false = Dima

    while(left <= right) {
        int chosen;

        if(a[left] > a[right]) {
            chosen = a[left];
            left++;
        } else {
            chosen = a[right];
            right--;
        }

        if(turn)
            sereja += chosen;
        else
            dima += chosen;

        turn = !turn;
    }

    cout << sereja << " " << dima << endl;

    return 0;
}