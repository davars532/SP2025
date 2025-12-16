//
// Created by David Arsov on 4.12.25.
//

#include <iostream>

using namespace std;

// Да се напише програма која за квадратна матрица
// внесена од тастатура ќе испечати на екран дали
// таа е симетрична во однос на главната дијагонала.

int main() {

    int n;

    cin >> n;

    int a[100][100];
    int simetricna = 1;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                simetricna = 0;
                break;
            }
        }
    }

    if (simetricna == 1) {
        cout << "Matricata e simetricna";
    } else {
        cout << "Matricata ne e simetricna";
    }
    return 0;
}