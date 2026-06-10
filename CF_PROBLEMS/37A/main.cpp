#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> cHt;

    for(int i=0; i<n; i++)
    {
        int ht;
        cin >> ht;
        cHt[ht]++;
    }

    int mtHt = 0;
    for(auto pair : cHt)
    {
        mtHt = max(mtHt, pair.second);
    }
    int noT = cHt.size();

    cout << mtHt << " " << noT << "\n";
    return 0;
}