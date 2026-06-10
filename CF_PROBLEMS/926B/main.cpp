#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<long long>x(n);

    for(int i=0; i<n; i++) cin>>x[i];

    sort(x.begin(), x.end());
    long long g = 0;
    for(int i=1; i<n; i++) 
    {
        g = gcd(g, x[i] - x[i - 1]);
    }

    long long m = 0;
    for(int i=1; i<n; i++)  m += (x[i] - x[i - 1]) / g - 1;

    cout<<m<<"\n";
    return 0;
}