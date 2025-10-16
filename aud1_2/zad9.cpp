//
// Created by David Arsov on 9.10.25.
//

#include <iostream>

using namespace std;

// Да се напише програма каде од тастатура ќе се внесе цена на производ,
// а потоа ќе ја испечати неговата цена со пресметан ддв.

int main() {
    float cena;

    cin >> cena;

    float ddv = 18.0 / 100;

    float suma = cena + (cena * ddv);

    cout << "DDV = " << ddv << endl;
    cout << "Vkupna suma = " << suma;
    return 0;
}