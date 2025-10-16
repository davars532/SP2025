//
// Created by David Arsov on 16.10.25.
//

#include <iostream>

using namespace std;

//Да се напише програма која чита знак од тастатура и во зависнот од тоа дали е
//мала или голема буква печати 1 или 0, соодветно.

int main() {
    char c;
    cout << "Vnesi znak: ";
    cin >> c;

    //('a, 'z') || ('A', 'Z')


    // c >= 'a' AND c <= 'z'
    // c >= 'A' AND c <= 'Z'
    // nacin 1
    if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z'))) {
        cout << "Vnesena e bukva" << endl;
    }

    // nacin 2
    if ((c >= 'a') && (c <= 'z')) {
        cout << "Vnesena e bukva";
    } else if (c >= 'A' && c <= 'Z') {
        cout << "Vnesena e bukva";
    } else if (c >= '0' && c <= '9') {
        cout << "Vnesen e broj";
    } else {
        cout << "Vnesen e znak";
    }

}