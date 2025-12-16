//
// Created by David Arsov on 4.12.25.
//

#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int a[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int x, y;
    cin >> x >> y;

    int k1 = 0, k2 = 0, k3 = 0, k4 = 0;

    // 4 kvadrant
    for (int i = x; i < n; i++) {
        for (int j = y; j < m; j++) {
            k4 += a[i][j];
        }
    }

    // 1 kvadrant
    for (int i = 0; i < x; i++) {
        for (int j = y; j < m; j++) {
            k1 += a[i][j];
        }
    }

    // 2 kvadrant
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            k2 += a[i][j];
        }
    }

    // 3 kvadrant
    for (int i = x; i < n; i++) {
        for (int j = 0; j < y; j++) {
            k3 += a[i][j];
        }
    }

    cout << k1 << " " << k2 << " " << k3 << " " << k4 << endl;

    return 0;
}