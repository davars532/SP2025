//
// Created by David Arsov on 6.11.25.
//

#include <iostream>

using namespace std;

// Да се напише програма што од непознат број на цели броеви кои се внесуваат од тастатура ќе ги определи позициите
// (редните броеви на внесување) на двата последователни броја што ја имаат најголемата сума.
// Програмата завршува ако едно по друго (последователно) се внесат два негативни цели броја.

int main() {


    int maxSuma = 0;
    int maxPozicija = -1;
    int prethodenBroj;
    int momentalenBroj;
    int brojac = 0;

    cin >> prethodenBroj >> momentalenBroj;
    brojac += 2;
    maxSuma = prethodenBroj + momentalenBroj;
    maxPozicija = brojac;
    if (momentalenBroj < 0 && prethodenBroj < 0) {
        return 0;
    }
    prethodenBroj = momentalenBroj;

    while (true) {
        cin >> momentalenBroj;
        brojac++;

        if (momentalenBroj < 0 && prethodenBroj < 0) {
            break;
        }

        int tempSuma = prethodenBroj + momentalenBroj;

        if (tempSuma > maxSuma) {
            maxSuma = tempSuma;
            maxPozicija = brojac;
        }

        prethodenBroj = momentalenBroj;
    }

    cout << "Maksimalna suma: " << maxSuma << endl;
    cout << "Pozicii: " << maxPozicija - 1 << " " << maxPozicija;

    return 0;
}