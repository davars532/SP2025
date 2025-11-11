//
// Created by David Arsov on 10.11.25.
//


#include <iostream>

using namespace std;

// Од стандарден влез се читаат знаци се додека не се прочита извичник.
// Во вака внесениот текст се скриени цели броеви (помали од 100).
// Да се напише програма што ќе ги прочита сите знаци и на излез
// ќе го испечати збирот на сите броеви скриени во текстот.
//
// Напомена: cin во C++ ги игнорира празните места (space).
// За да не ги игнорира потребно е да се додаде noskipws
// пред читањето на знакот (пр. cin >> noskipws >> znak;)

int main() {

    char c;
    int suma = 0;
    int broj = 0;
    int brojac = 0;

    while (cin >> noskipws >> c) {

        if (c == '!') {
            suma += broj;
            break;
        }

        if (c >= '0' && c <= '9') {
            int cifra = c - '0';

            if (brojac == 2) {
                suma += broj;
                broj = 0;
                brojac = 0;
            }

            broj = broj * 10 + cifra;
            brojac++;
        } else {
            suma += broj;
            broj = 0;
            brojac = 0;
        }
    }

    cout << suma;
    return 0;
}