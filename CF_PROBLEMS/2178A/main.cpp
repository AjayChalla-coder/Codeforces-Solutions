#include <iostream>
#include <string>
using namespace std;

int main() 
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; 
    if(!(cin >> t)) return 0;
    while(t--) {
        string s; cin >> s;
        int cnt = 0;
        for(char c : s) if(c == 'Y') ++cnt;
        cout << (cnt <= 1 ? "YES" : "NO") << '\n';
    }
    return 0;
}
