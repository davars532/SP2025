//
// Created by David Arsov on 16.10.25.
//

#include <iostream>

using namespace std;

//Да се напише програма што за внесен број на поени од испит ќе
//генерира соодветна оценка според следната табела:
// (0, 50) 5/
// [50, 60) 6
// [60, 70) 7
// [70, 80) 8
// [80, 90) 9
// [90, 100) 10
int main() {

    float poeni;
    cout << "Vnesete poeni";
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

    // nacin 2
    if (poeni < 50) {
        cout << "Ocenka: 5";
    }
    if (poeni >= 50 && poeni < 60) {
        cout << "Ocenka: 6";
    }
    if (poeni >= 60 && poeni < 70) {
        cout << "Ocenka: 7";
    }
    if (poeni >= 70 && poeni < 80) {
        cout << "Ocenka: 8";
    }
    if (poeni >= 80 && poeni < 90) {
        cout << "Ocenka: 9";
    }
    if (poeni >= 90) {
        cout << "Ocenka: 10";
    }

    // nacin 3
    if (poeni >= 90) {
        cout << "Ocenka: 10";
    }
    if (poeni >= 80) {
        cout << "Ocenka: 9";
    }
    if (poeni >= 70) {
        cout << "Ocenka: 8";
    }
    if (poeni >= 60) {
        cout << "Ocenka: 7";
    }
    if (poeni >= 50) {
        cout << "Ocenka: 6";
    }
    if (poeni < 50) {
        cout << "Ocenka: 5";
    }

    return 0;
}