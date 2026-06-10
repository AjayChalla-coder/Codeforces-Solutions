#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        long long a, b;
        cin >> a >> b;
        if(a == b)
        {
            cout << 0 << '\n';
            continue;
        }
        long long ratio;
        if (b > a) {
            if (b % a != 0) {
                cout << -1 << endl;
                continue;
            }
            ratio = b / a;
        } else {
            if (a % b != 0) {
                cout << -1 << endl;
                continue;
            }
            ratio = a / b;
        }
        int k=0;
        while(ratio%2==0)
        {
            ratio/=2;
            k++;
        }
        if (ratio != 1) {
            cout << -1 << endl;
            continue;
        }
        int ops=k/3;
        k%=3;
        ops += k / 2;
        k %= 2;
        ops += k;
        cout << ops << "\n";
    }
    return 0;
}