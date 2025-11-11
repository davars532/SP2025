//
// Created by David Arsov on 6.11.25.
//

#include <iostream>
using namespace std;

int main() {
    char odgovor;
    cout << "Dali SP e lesen predmet? (d/n): "<<endl;
    cin >> odgovor;

    if (odgovor == 'D' || odgovor == 'd') {}

    switch (odgovor) {
        case 'D':
        case 'd':
            cout << "I jas mislam taka!" << endl;
            break;
        case 'N':
        case 'n':
            cout << "Navistina?" << endl;
            break;
        default:
            cout << "Ova e DA ili NE?" << endl;
    }
    return 0;
}