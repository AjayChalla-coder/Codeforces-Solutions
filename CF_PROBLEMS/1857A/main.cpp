#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int odd_count = 0;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if(x % 2 != 0)
                odd_count++;
        }

        if(odd_count % 2 == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}