//
// Created by David Arsov on 10.11.25.
//

#include <iostream>

using namespace std;

char validnaLozinka(long broj) {
    int brojac = 0;
    bool bukva = false;
    char minBukva = 'Z';

    //ASCII кодот на првата голема буква A е 65,
    //а на последната голема буква Z е 90. ASCII кодовите на
    //цифрите од 0 до 9 се движат од 48 до 57.

    while (broj > 0) {
        // dali e bukva

        int pair = broj % 100;
        if (pair >= 65 && pair <= 90) {
            bukva = true;
            brojac++;

            if (pair < minBukva) {
                minBukva = pair;
            }
        }

        // dali e cifra
        else if (pair >= 48 && pair <= 57) {
            brojac++;
        } else {
            return 0;
        }

        broj /= 100;
    }

    if (brojac >= 3 && bukva == true) {
        return minBukva;
    } else {
        return 0;
    }
}

int main() {

    int n;
    cin >> n;

    char a = '1';
    cout << a - '0';

    for (int i = 0; i < n; i++) {
        long broj;
        cin >> broj;

        char minBukva = validnaLozinka(broj);
        if (minBukva == 0) {
            cout << broj << " - NO" << endl;
        } else {
            cout << broj << " - YES - " << minBukva << endl;
        }
    }
}