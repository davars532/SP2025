//
// Created by David Arsov on 30.10.25.
//

#include <iostream>

using namespace std;

int main() {
    int x, n;

    cin >> x >> n;

    // Proizvod sekogas zapocnuva od 1
    int y = 1;

    for (int i = 1; i <= n; i++) {
        y = y * x;
    }

    cout << "X ^ N = " << y << endl;

    int i = 1;

    y = 1;

    while (i <= n) {
        y = y * x;
        i++;
    }

    cout << "X ^ N = " << y;

    return 0;
}