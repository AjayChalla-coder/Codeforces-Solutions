#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];
    int max_len = 1, current_len = 1;
    for(int i=1; i<n; i++)
    {
        if(a[i] > a[i-1])
        {
            current_len++;
        }
        else
        {
            current_len = 1;
        }
        max_len = max(max_len, current_len);
    }
    cout << max_len << "\n";
    return 0;
}