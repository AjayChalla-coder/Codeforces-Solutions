#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    vector<int> h(n);
    for(int i=0; i<n; i++) cin >> h[i];
    long long energy=0, money=0;
    int prev=0;
    for (int i = 0; i < n; i++) {
        energy += prev - h[i];

        if (energy < 0) {
            money += -energy;
            energy = 0;
        }

        prev = h[i];
    }
    cout << money << "\n";
}