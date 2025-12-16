//
// Created by David Arsov on 27.11.25.
//

#include <iostream>

using namespace std;

// Да се напише програма која ќе провери дали дадена низа од n
// елементи која се чита од стандарден влез е строго растечка,
// строго опаѓачка или ниту строго растечка ниту строго опаѓачка.
// Резултатот да се испечати на екран.

int main() {

    int n;
    int a[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int rastecka = 1, opagacka = 1;

    for (int i = 0; i < n - 1; i++) {
        int momentalen = a[i];
        int sleden = a[i + 1];

        if (sleden <= momentalen) {
            rastecka = 0;
            break;
        }
    }

    for (int i = 1; i < n; i++) {
        int momentalen = a[i];
        int prethoden = a[i - 1];

        if (momentalen >= prethoden) {
            opagacka = 0;
            break;
        }
    }

    if (opagacka == 1) {
        cout << "Nizata e opagacka";
    } else if (rastecka == 1) {
        cout << "Nizata e rastecka";
    } else {
        cout << "Nizata ne e nitu rastecka, nitu opagacka";
    }
}