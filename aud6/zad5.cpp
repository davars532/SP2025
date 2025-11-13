//
// Created by David Arsov on 13.11.25.
//


#include <iostream>

using namespace std;

bool daliProst(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

//Да се напише програма што ќе ги отпечати сите парови
//прости броеви помали од 1000 што се разликуваат
//меѓу себе за 2.
//На крај да се отпечати и нивниот број.

int main() {
    int brojac = 0;

    for (int i = 999; i >= 2; i--) {
        int pomal = i - 2;
        if (daliProst(i) && daliProst(pomal)) {
            cout << i << " " << pomal << endl;
            brojac++;
        }
    }

    cout << brojac << endl;
    return 0;
}