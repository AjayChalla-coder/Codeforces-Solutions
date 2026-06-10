#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int hired = 0;        
    int untreated = 0;    

    while (n--) {
        int x;
        cin >> x;

        if (x > 0) {
            hired += x;         
        } else {
            if (hired > 0) {
                hired--;        
            } else {
                untreated++;    
            }
        }
    }

    cout << untreated << "\n";
    return 0;
}