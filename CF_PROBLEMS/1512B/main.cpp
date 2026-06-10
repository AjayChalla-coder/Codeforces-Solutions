#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<string> grid(n);
        for(int i=0; i<n; i++) cin >> grid[i];
        vector<pair<int, int>> stars;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(grid[i][j] == '*')
                {
                    stars.push_back({i, j});
                }
            }
        }
        int r1 = stars[0].first;
        int c1 = stars[0].second;
        int r2 = stars[1].first;
        int c2 = stars[1].second; 
        if(r1 == r2)
        {
            int new_row = (r1 + 1 < n) ? r1+1 : r1-1;
            grid[new_row][c1] = '*';
            grid[new_row][c2] = '*';
        }
        else if(c1==c2)
        {
            int new_col = (c1 + 1 < n) ? c1+1 : c1-1;
            grid[r1][new_col] = '*';
            grid[r2][new_col] = '*';
        }
        else{
            grid[r1][c2] = '*';
            grid[r2][c1] = '*';
        }

        for(auto &row : grid)
        {
            cout << row << "\n";
        }
    }
    return 0;
}