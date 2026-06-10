#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int max_count = 0;
        int current_count = 0;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            if(x == 0) {
                current_count++;
                max_count = max(max_count, current_count);
            } else {
                current_count = 0;
            }
        }

        cout << max_count << "\n";
    }

    return 0;
}
