#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        if (a > b)
            swap(a, b);

        int side = max(b, 2 * a);

        cout << side * side << endl;
    }
}