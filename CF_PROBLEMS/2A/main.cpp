#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;

    vector<string> name(n);
    vector<int> score(n);

    for (int i = 0; i < n; i++) 
    {
        cin >> name[i] >> score[i];
    }

    map<string, int> total;
    for (int i = 0; i < n; i++) 
    {
        total[name[i]] += score[i];
    }

    int maxScore = -1000000000;
    for (auto &p : total) 
    {
        if (p.second > maxScore) 
        {
            maxScore = p.second;
        }
    }
    map<string, int> running;

    for (int i = 0; i < n; i++) 
    {
        running[name[i]] += score[i];

        if (running[name[i]] >= maxScore && total[name[i]] == maxScore) 
        {
            cout << name[i];
            break;
        }
    }
    cin.get();
    cin.get();
    return 0;
}