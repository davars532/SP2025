//
// Created by David Arsov on 13.11.25.
//


#include <iostream>

//4.6. Задача 6
// Да се пресмета збирот:
//
// 1! + (1 + 2)! + (1 + 2 + 3)! + … + (1 + 2 + … + n)!
//
// НАПОМЕНА: Користете функција за пресметување на збирот на првите k
// природни броеви Користете функција за пресметување факториел на
// еден природен број k.

int zbirDoN(int n) {
    int zbir = 0;

    for (int i = 1; i <= n; i++) {
        zbir += i;
    }

    return zbir;
}

long faktoriel(int n) {
    long proizvod = 1;

    for (int i = n; i > 0; i--) {
        proizvod *= i;
    }

    return proizvod;
}


using namespace std;

int main() {

// 1! + (1 + 2)! + (1 + 2 + 3)! + … + (1 + 2 + … + n)!

    int n;
    cin >> n;

    long suma = 0;

    for (int i = 1; i <= n; i++) {
        int zbir = zbirDoN(i);
        long fakt = faktoriel(zbir);
        suma += fakt;
    }

    cout << suma << endl;
    return 0;
}