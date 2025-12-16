//
// Created by David Arsov on 4.12.25.
//


#include <iostream>

using namespace std;

// Да се напише програма која за матрица внесена од тастатура
// ќе ја пресмета разликата на збирот на елементите на непарните колони и
// збирот на елементите на парните редици. Матрицата не мора да биде квадратна.

int main() {

    int n, m;
    int a[100][100];

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int zbirParni = 0;
    int zbirNeparni = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            // neparni koloni
            if ((j + 1) % 2 != 0) {
                zbirNeparni += a[i][j];
            }
            // parni redici
            if ((i + 1) % 2 == 0) {
                zbirParni += a[i][j];
            }
        }
    }

    int razlika = zbirNeparni - zbirParni;
    cout << "Razlikata e: " << razlika << endl;
    return 0;
}