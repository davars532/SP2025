//
// Created by David Arsov on 13.11.25.
//

#include <iostream>

using namespace std;
// 4.4. Задача 4
// Да се напише програма што ќе ги отпечати сите прости
// броеви помали од 10000 чиј што збир на цифри е исто така прост број.
// На крајот да се отпечати колку вакви броеви се пронајдени.


// fun daliProst(int n)

bool daliProst(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

// fun zbirCifri()

int zbirCifri(int n) {
    int zbir = 0;

    while (n > 0) {
        int cifra = n % 10;
        zbir += cifra;
        n /= 10;
    }

    return zbir;
}

int main() {

    int brojac = 0;

    for (int i = 10000; i > 0; i--) {
        if (daliProst(i)) {
            int zbir = zbirCifri(i);
            if (daliProst(zbir)) {
                cout << i << endl;
                brojac++;
            }
        }
    }

    cout << brojac << endl;
    return 0;
}