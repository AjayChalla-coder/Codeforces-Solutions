#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    int b = arr[0];
    int w = arr[0];
    int amazing = 0;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > b)
        {
            amazing++;
            b = arr[i];
        }
        else if(arr[i] < w)
        {
            amazing++;
            w = arr[i];
        }
    }

    cout << amazing << "\n";
    system("pause");
    return 0;
}