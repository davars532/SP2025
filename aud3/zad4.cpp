//
// Created by David Arsov on 16.10.25.
//

#include <iostream>

using namespace std;

//Да се напише програма што за внесен број на поени од испит ќе
//генерира соодветна оценка според следната табела:
// (0, 50) 5
// [50, 60) 6
// [60, 70) 7
// [70, 80) 8
// [80, 90) 9
// [90, 100) 10

// 1 - 3 -
// 4 - 7
// 8 - 0 +
int main() {

    int poeni;
    cout << "Vnesete poeni: ";
    cin >> poeni;

    // nacin 1
    if (poeni < 50) {
        cout << "Ocenka: 5";
    } else if (poeni >= 50 && poeni < 60) {
        cout << "Ocenka: 6";
    } else if (poeni >= 60 && poeni < 70) {
        cout << "Ocenka: 7";
    } else if (poeni >= 70 && poeni < 80) {
        cout << "Ocenka: 8";
    } else if (poeni >= 80 && poeni < 90) {
        cout << "Ocenka: 9";
    } else {
        cout << "Ocenka: 10";
    }

    int poslednaCifra = poeni % 10;


    if (poslednaCifra >= 1 && poslednaCifra <= 3) {
        cout << "-" << endl;
    } else if (poslednaCifra >= 4 && poslednaCifra <= 7) {
        cout << " " << endl;
    } else {
        cout << "+" << endl;
    }

    //nacin 2

    int ocenka;

    if (poeni < 50) {
        ocenka = 5;
    } else if (poeni >= 50 && poeni < 60) {
        ocenka = 6;
    } else if (poeni >= 60 && poeni < 70) {
        ocenka = 7;
    } else if (poeni >= 70 && poeni < 80) {
        ocenka = 8;
    } else if (poeni >= 80 && poeni < 90) {
        ocenka = 9;
    } else {
        ocenka = 10;
    }

    char znak;
    if (ocenka > 5) {
        if (poslednaCifra >= 1 && poslednaCifra <= 3) {
            znak = '-';
        } else if (poslednaCifra >= 4 && poslednaCifra <= 7) {
            znak = ' ';
        } else {
            znak = '+';
        }

        cout << ocenka << " " << znak;
    }

    return 0;
}