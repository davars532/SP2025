//
// Created by David Arsov on 10.11.25.
//

#include <iostream>

using namespace std;

int cifra(int broj, int i) {
    if (i % 2 == 0) {
        return broj / 100 % 10;
    } else {
        return broj / 10 % 10;
    }
}

int main() {

    int n;
    int suma = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int broj;
        cin >> broj;

        int c;
        c = cifra(broj, i);

        // if (i % 2 == 0) {
        //     c = broj / 100 % 10;
        // } else {
        //     c = broj / 10 % 10;
        // }

        suma += c;
    }

    cout << suma;

    return 0;
}