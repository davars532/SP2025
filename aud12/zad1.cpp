//
// Created by David Arsov on 25.12.25.
//

#include <iostream>

using namespace std;

// Да се напише функција што ќе одредува колку
// пати даден знак се наоѓа во даден стринг.
// Знакот за споредување и стрингот се внесуваат
// од тастатура.

int countOccurence(char str[], char c) {
    int brojac = 0;

    // for (int i = 0; i < strlen(str); i++) {}
    for (int i = 0; str[i] != '\0'; i++) {
        if (tolower(str[i]) == tolower(c)) {
            brojac++;
        }
    }

    return brojac;
}


int main() {
    char str[100];
    char c;
    cin.getline(str, 100);
    cin >> c;
    cout << "Broj pojavuvanja: " << countOccurence(str, c) << endl;
    return 0;
}