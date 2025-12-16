//
// Created by David Arsov on 4.12.25.
//

#include <iostream>

using namespace std;

int main() {

    int n, m;
    int a[100][100];

    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Elementi od glavna dijagonala: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j) {
                cout << a[i][j] << " ";
            }
        }
    }

    cout << "Elementi od sporedna dijagonala: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i + j == n - 1) {
                cout << a[i][j] << " ";
            }
        }
    }

    cout << endl << "Elementi nad glavna dijagonala: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (j > i) {
                cout << a[i][j] << " ";
            }
        }
    }

    return 0;
}