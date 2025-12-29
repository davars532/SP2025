//
// Created by David Arsov on 25.12.25.
//


#include <iostream>

using namespace std;

// Да се напише функција која ќе одредува дали една текстуална
// низа е подниза на друга текстуална низа.

// Пример
//
// face е подниза на Please faceAbook

int podniza(char str[], char podniza[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (strncmp(str + i, podniza, strlen(podniza)) == 0) {
            return 1;
        }
    }

    return 0;
}

int main() {

    char str[100] = "";
    char str2[100] = "";
    cin.getline(str, 100);
    cin.getline(str2, 100);

    cout << "Dali e podniza: " << podniza(str, str2) << endl;
    return 0;
}