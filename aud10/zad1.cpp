//
// Created by David Arsov on 11.12.25.
//

#include <iostream>

using namespace std;

// Да се пресмета збирот 1! + (1+2)! + (1+2+3)! + … + (1+2+…+n)!
// притоа: - користете рекурзивна функција за пресметување на
// збирот на првите k природни броеви. - користете рекурзивна
// функција за пресметување на факториел на еден природен број.

int zbirDoN(int n) {
    if (n == 1) return 1;
    // if (n == 0) return 0;
    return n + zbirDoN(n - 1);
}

int factoriel(int n) {
    if (n == 1) return 1;
    return n * factoriel(n - 1);
}

int main() {
    int n;
    cin >> n;
    int suma = 0;
    // 1! + (1+2)! + (1+2+3)! + … + (1+2+…+n)!
    for (int i = 1; i <= n; i++) {
        int zbir = zbirDoN(i);
        int faktoriel = factoriel(zbir);
        suma += faktoriel;
    }

    cout << suma << endl;
    return 0;
}