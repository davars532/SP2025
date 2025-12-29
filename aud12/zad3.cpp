//
// Created by David Arsov on 25.12.25.
//

#include <iostream>

// Да се напише програма која ќе ја отпечати поднизата на дадена
// текстуална низа (што се внесува од тастатура) определена со
// позицијата и должината, што како параметри се внесуваат од тастатура.
// Поднизата започнува од знакот што се наоѓа на соодветната позиција
// во текстуалната низа, броејќи од лево.
//
// Пример
//
// Ако од тастатура се внесе:
//
// banana
//
// позиција: 2
//
// должина: 4
//
// тогаш програмата треба да отпечати: nana
//

using namespace std;

void pecatiPodniza(char str[], int startPos, int dolzina) {
    for (int i = startPos; i < startPos + dolzina; i++) {
        cout << str[i];
    }
    cout << endl;
    char str2[100] = "";
    strncpy(str2, str + startPos, dolzina);
    cout << str2 << endl;
}

int main() {
    char str[100];
    cin.getline(str, 100);
    int startPos, dolzina;
    cin >> startPos >> dolzina;
    pecatiPodniza(str, startPos, dolzina);
    return 0;
}