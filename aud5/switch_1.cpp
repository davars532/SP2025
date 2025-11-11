//
// Created by David Arsov on 6.11.25.
//


#include <iostream>

using namespace std;


// Да се напише програма што за знак внесен од тастатура ќе одреди
// дали е самогласка, цифра или другo.



int main() {

    char c;
    cin >> c;

    switch (c) {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case '0':
            cout << "Vnesena e cifra";
            break;
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            cout << "Vnesena e samoglaska";
            break;
        default:
            cout << "Vnesen e drug tip na znak";

    }

    return 0;
}