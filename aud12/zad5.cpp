//
// Created by David Arsov on 25.12.25.
//

#include <iostream>

// Да се напише функција која ќе проверува дали
// дадена текстуална низа е палиндром.

// Една текстуална низа е палиндром ако таа
// се чита исто од лево на десно и од десно на лево.
//
// Примери за палиндроми

int daliPalindrom (char str[]) {
    for (int i = 0; i < strlen(str) / 2; i++) {
        if (str[i] != str[strlen(str) - i - 1]) {
            return 0;
        }
    }

    return 1;
}

using namespace std;

int main() {
    char str[100] = "";
    cin.getline(str, 100);
    cout << str << endl;
    cout << "Palindrom: " << daliPalindrom(str) << endl;
    return 0;
}