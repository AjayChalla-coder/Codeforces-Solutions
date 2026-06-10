#include <iostream>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int h[n];

    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    long long current_sum = 0;

    // First window
    for (int i = 0; i < k; i++) {
        current_sum += h[i];
    }

    long long min_sum = current_sum;
    int min_index = 0;

    // Slide window
    for (int i = k; i < n; i++) {
        current_sum += h[i];
        current_sum -= h[i - k];

        if (current_sum < min_sum) {
            min_sum = current_sum;
            min_index = i - k + 1;
        }
    }

    cout << min_index + 1 << endl; // +1 for 1-based index

    return 0;
}