#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    long long totalFaces = 0;

    for (int i = 0; i < n; i++) {
        string poly;
        cin >> poly;

        if (poly == "Tetrahedron") {
            totalFaces += 4;
        } 
        else if (poly == "Cube") {
            totalFaces += 6;
        } 
        else if (poly == "Octahedron") {
            totalFaces += 8;
        } 
        else if (poly == "Dodecahedron") {
            totalFaces += 12;
        } 
        else if (poly == "Icosahedron") {
            totalFaces += 20;
        }
    }

    cout << totalFaces;
    return 0;
}