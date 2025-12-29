//
// Created by David Arsov on 25.12.25.
//

#include <iostream>

// Да се напише функција што ќе ја
// одредува должината на една текстуална низа.

// Да се даде итеративно и рекурзивно решение.

// Пример

// Ако на функцијата како аргумент и се предаде стрингот

// zdravo!

// тогаш таа треба да врати: 7

using namespace std;

int dolzinaNiza(char str[]) {
    int brojac = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        brojac++;
    }

    return brojac;
}

int dolzinaNizaRecursive(char str[]) {
    if (*str == '\0') {
        return 0;
    }
    return 1 + dolzinaNizaRecursive(str + 1);
}

int main() {
    char str[100];
    cin.getline(str, 100);
    // cin.get(str, 100);
    // cin >> str;

    // test space\n
    cout << "Dolzina na niza: " << dolzinaNiza(str) << endl;
    cout << "Dolzina na niza rekurzivna: " << dolzinaNizaRecursive(str) << endl;
    return 0;
}