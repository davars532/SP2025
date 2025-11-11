//
// Created by David Arsov on 6.11.25.
//

#include <iostream>

using namespace std;

// /Да се напише програма што ќе претставува едноставен калкулатор. Во програмата се вчитуваат два броја и оператор во формат:

// broj1 operator broj2

int main() {
    int broj1, broj2;
    char op;

    cin >> broj1 >> op >> broj2;

    int rezultat;

    switch (op) {
        case '+':
            rezultat = broj1 + broj2;
            break;
        case '-':
            rezultat = broj1 - broj2;
            break;
        case '*':
            rezultat = broj1 * broj2;
            break;
        case '/':
            rezultat = broj1 / broj2;
            break;
        case '%':
            rezultat = broj1 % broj2;
            break;
    }

    cout << broj1 << op << broj2 << "=" << rezultat << endl;

}