//
// Created by David Arsov on 30.10.25.
//

#include <iostream>

using namespace std;


int main() {

    // Да се напише програма за пресметување на сумата на сите парни двоцифрени броеви.
    // Добиената сума се печати на екран.

    // Suma sekogas zapocnuva od 0
    int sumaParni = 0;

    for (int i = 10; i <= 99; i+= 2) {
        sumaParni += i;
    }

    cout << "Sumata na parnite dvocifreni broevi e " << sumaParni << endl;

    sumaParni = 0;

    int i = 10;
    while (i <= 99) {
        sumaParni += i;
        i += 2;
    }

    cout << "Sumata na parnite dvocifreni broevi e " << sumaParni << endl;

    return 0;
}