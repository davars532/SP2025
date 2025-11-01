//
// Created by David Arsov on 30.10.25.
//

#include <iostream>

using namespace std;

// Да се напише програма за пресметување на сумата на сите непарни двоцифрени броеви.
// Програмата ја печати сумата на екран во следниот формат:

// 11 + 13 + 15 + 17 + … + 97 + 99 = 2475

int main() {

    int sumaNeparni = 0;
    for (int i = 11; i <= 99; i+= 2) {
        cout << i;

        if (i < 99) {
            cout << " + ";
        }
        sumaNeparni += i;
    }
    cout << " = " << sumaNeparni << endl;


    sumaNeparni = 0;
    int brojac = 11;

    while (brojac <= 99) {
        cout << brojac;

        if (brojac < 99) {
            cout << " + ";
        }

        sumaNeparni += brojac;
        brojac += 2;
    }

    cout << " = " << sumaNeparni << endl;

    // Bez if
    sumaNeparni = 0;
    brojac = 11;
    while (brojac <= 97) {
        cout << brojac;
        cout << " + ";
        sumaNeparni += brojac;
        brojac += 2;
    }
    sumaNeparni += brojac;
    cout << brojac << " = " << sumaNeparni;
    return 0;
}