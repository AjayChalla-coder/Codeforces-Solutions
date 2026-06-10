#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    long long t;
    cin >> n >> t;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    long long sum = 0;
    int left = 0;
    int max_books = 0;

    for(int right = 0; right < n; right++) {
        sum += a[right];

        while(sum > t) {
            sum -= a[left];
            left++;
        }

        max_books = max(max_books, right - left + 1);
    }

    cout << max_books << endl;

    return 0;
}