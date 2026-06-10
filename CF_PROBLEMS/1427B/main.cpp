#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int ones = 0, twos = 0;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;

            if (x == 1) ones++;
            else twos++;
        }

        if (sum % 2)
            cout << "NO\n";
        else
        {
            int target = sum / 2;

            if (target % 2 == 1 && ones == 0)
                cout << "NO\n";
            else
                cout << "YES\n";
        }
    }
}