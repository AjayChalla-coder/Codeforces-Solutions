#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end(), greater<int>());

    int total = accumulate(a.begin(), a.end(), 0);
    int mySum = 0;
    int count = 0;

    for (int coin : a) {
        mySum += coin;
        count++;
        if (mySum > total - mySum) {
            break;
        }
    }

    cout << count << endl;
    return 0;
}
