#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int current = 0;
    int maxCapacity = 0;

    while (n--) {
        int a, b;
        cin >> a >> b;

        current -= a;   // people exit
        current += b;   // people enter

        if (current > maxCapacity)
            maxCapacity = current;
    }

    cout << maxCapacity;
    return 0;
}