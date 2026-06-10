#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int cnt25 = 0, cnt50 = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x == 25) {
            cnt25++;
        } 
        else if (x == 50) {
            if (cnt25 == 0) {
                cout << "NO\n";
                return 0;
            }
            cnt25--;
            cnt50++;
        } 
        else { 
            if (cnt50 > 0 && cnt25 > 0) {
                cnt50--;
                cnt25--;
            } else if (cnt25 >= 3) {
                cnt25 -= 3;
            } else {
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";
    return 0;
}
