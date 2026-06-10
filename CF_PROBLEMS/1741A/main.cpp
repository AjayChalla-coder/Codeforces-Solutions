#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        char la = a.back();
        char lb = b.back();
        if (la == lb) {
            if (la == 'M') {
                cout << "=\n";
            } else if (la == 'S') {
                if (a.size() == b.size()) cout << "=\n";
                else if (a.size() > b.size()) cout << "<\n";
                else cout << ">\n";
            } else { 
                if (a.size() == b.size()) cout << "=\n";
                else if (a.size() > b.size()) cout << ">\n";
                else cout << "<\n";
            }
        }
        else {
            if (la == 'S') cout << "<\n";
            else if (la == 'L') cout << ">\n";
            else { 
                if (lb == 'S') cout << ">\n";
                else cout << "<\n"; 
            }
        }
    }
    return 0;
}