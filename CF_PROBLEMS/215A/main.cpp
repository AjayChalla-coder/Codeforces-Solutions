#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> frontGears(n);
    for (int i = 0; i < n; i++) {
        cin >> frontGears[i];
    }

    int m;
    cin >> m;

    vector<int> rearGears(m);
    for (int i = 0; i < m; i++) {
        cin >> rearGears[i];
    }

    int maximumRatio = 0;
    int countMaximum = 0;

    for (int front : frontGears) {
        for (int rear : rearGears) {

            if (rear % front == 0) {
                int ratio = rear / front;

                if (ratio > maximumRatio) {
                    maximumRatio = ratio;
                    countMaximum = 1;   
                }
                
                else if (ratio == maximumRatio) {
                    countMaximum++;
                }
            }
        }
    }

    cout << countMaximum;
    return 0;
}
