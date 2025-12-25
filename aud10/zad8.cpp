//
// Created by David Arsov on 18.12.25.
//

#include <iostream>

using namespace std;

// Да се напише програма која за дадена низа од цели броеви (која се внесува од тастатура),
// ќе го отпечати најмалиот заеднички содржател (НЗС) на нејзините елементи. Програмата
// треба задолжително да содржи рекурзивна функција за пресметување НЗС на два броја.

// Пример: За низата 18 12 24 36 6 на екран треба да се отпечати:

int nzs(int a, int b, int n) {
    if (n % a == 0 && n % b == 0) {
        return n;
    }
    return nzs(a, b, n + 1);
}

int main() {

    int n;
    int a[100];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int nzsNiza = a[0];
    for (int i = 0; i < n; i++) {
        nzsNiza = nzs(nzsNiza, a[i], 1);
    }
    cout << "NZS: " << nzsNiza << endl;


    return 0;
}