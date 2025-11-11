//
// Created by David Arsov on 6.11.25.
//

#include <iostream>

using namespace std;

// Да се напише програма која што ќе ги отпечати сите четирицифрени природни броеви кои се деливи со
// збирот на двата броја
// составени од првите две цифри и од последните две цифри на четирицифрениот број.
// На крајот треба да отпечати и колку вакви броеви се пронајдени.

int zbirCifri(int n) {
    int prvaPolovina = n / 100;
    int vtoraPolovina = n % 100;

    return prvaPolovina + vtoraPolovina;
}

int main() {

    int brojac = 0;

    for (int i = 1000; i <= 9999; i++) {
        int suma = zbirCifri(i);

        if (i % suma == 0) {
            cout << i << endl;
            brojac++;
        }
    }

    cout << "VKupno broevi: " << brojac << endl;
    return 0;
}