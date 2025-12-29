//
// Created by David Arsov on 25.12.25.
//

#include <iostream>

using namespace std;

// Да се напише функција која за дадена текстуална
// низа ќе одредува дали таа е доволно сложена за да биде лозинка.

// Секоја лозинка мора да содржи барем една буква,
// барем една цифра и барем еден специјален знак.

// Пример
//
// zdr@v0! е валидна лозинка.
//
// zdravo не е валидна лозинка.

int validnaLozinka(char str[]) {
    int bukva = 0;
    int cifra = 0;
    int specijalenZnak = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            bukva = 1;
        } else if (isdigit(str[i])) {
            cifra = 1;
        } else {
            specijalenZnak = 1;
        }
    }

    // return bukva && cifra && specijalenZnak;

    if (bukva == 1 && cifra == 1 && specijalenZnak == 1) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    char s[100];
    cin.getline(s, 100);

    cout << "Validna lozinka: " << validnaLozinka(s) << endl;
    return 0;
}