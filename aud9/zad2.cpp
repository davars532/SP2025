//
// Created by David Arsov on 4.12.25.
//

#include <iostream>

using namespace std;

// Да се напише програма која за матрица внесена од тастатура ќе ги замени елементите од
// главната дијагонала со разликата од максималниот
// и минималниот елемент во матрицата. Резултантната матрица да се испечати на екран.

int main() {

    int n, m;
    cin >> n >> m;
    int a[100][100];
    int maks, min;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    maks = a[0][0];
    min = a[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (maks < a[i][j]) {
                maks = a[i][j];
            }
            if (min > a[i][j]) {
                min = a[i][j];
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j) {
                a[i][j] = maks - min;
            }
            if (i + j == n - 1) {
                a[i][j] = min - maks;
            }
            if (i == n / 2 && j == m / 2) {
                a[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}