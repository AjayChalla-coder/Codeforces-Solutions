#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<string> names = {"Danil", "Olya", "Slava", "Ann", "Nikita"};
    int occurrences = 0;

    for (string name : names) {
        size_t pos = s.find(name);
        while (pos != string::npos) {
            occurrences++;
            pos = s.find(name, pos + 1);
        }
    }

    if (occurrences == 1)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}

