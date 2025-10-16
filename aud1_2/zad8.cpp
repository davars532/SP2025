//
// Created by David Arsov on 9.10.25.
//

#include <iostream>

using namespace std;

// Да се напише програма која чита голема буква од стандарден влез и ја печати истата како мала буква.
// - Напомена: Секој знак се претставува со ASCII број.

int main() {

    char c = 'A';
    char cLower = 'A' + 32;

    int difference = 'a' - 'A';
    cout << c << " " << (int) c << endl;
    cout << cLower << " " << (int) cLower << endl;
    cout << "a - A " << difference << endl;

    char cLower2 = 'A' + ('a' - 'A');

    cout << cLower2;
    return 0;
}