//
// Created by David Arsov on 9.10.25.
//

#include <iostream>

using namespace std;

// Да се напише програма каде од тастатура ќе се внесе цена на производ, број на рати на кои се исплаќа и камата
// (каматата е број изразен во проценти од 0 до 100). Програмата треба да го испечати износот на ратата и вкупната
// сума што ќе се исплати за производот

// ПОМОШ: Пресметајте ја целата сума, па потоа ратата.

int main() {

    int rata;
    float cena;
    float kamataProcent;

    cin >> cena >> rata >> kamataProcent;

    float kamata = cena * kamataProcent / 100;
    // 100 * 10 / 100

    float celaSuma = cena + kamata;
    float cenaRata = celaSuma / rata;

    cout << "Rata = " << cenaRata << endl;
    cout << "Cela suma = " << celaSuma << endl;

    return 0;
}