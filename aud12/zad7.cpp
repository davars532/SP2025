//
// Created by David Arsov on 25.12.25.
//


// Да се напише функција која во стринг што и се
// предава како влезен параметар ќе ги промени малите букви
// во големи и обратно, и ќе ги отстрани сите цифри и специјални знаци.
//
// Пример
//
// За низата:
//
// 0v@ePr1m3R
//
// треба да се добие:
//
// VEpRMr

#include <iostream>

using namespace std;

void transform(char str[]) {
    int brojac = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            if (islower(str[i])) {
                str[brojac] = toupper(str[i]);
            }
            if (isupper(str[i])) {
                str[brojac] = tolower(str[i]);
            }
            brojac++;
        }
    }

    // bez postavuvanje null terminator se pecati se do prviot null terminator koj ke se najde vo memorija
    str[brojac] = '\0';

    cout << str << endl;
}

int main() {

    char str[100];
    cin.getline(str, 100);
    transform(str);
    return 0;
}