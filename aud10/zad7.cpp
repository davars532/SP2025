//
// Created by David Arsov on 11.12.25.
//


#include <iostream>

// Да се напише програма која што за дадена низа од природни броеви
// (која што се внесува од тастатура) ќе го отпечати најголемиот заеднички делител
// (НЗД) на нејзините елементи.
// Програмата задолжително треба да содржи рекурзивна функција за пресметување НЗД на два природни броја.

// NZD(20, 12)
// 20 % 12 = 8
// 12 % 8 = 4
// 8 % 4 = 0
//
// NZD(20, 12) = 4
// 20 / 12 = 1 + 8 ostat
// 20 = 1 * 12 + 8

// 12 = 1 * 8 + 4 ostat

int nzd(int n, int m) {
    // n = 20 m = 12
    if (m == 0) {
        return n;
    }
    return nzd(m, n % m);
}

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int nzdNiza = a[0];

    for (int i = 0; i < n; i++) {
        nzdNiza = nzd(nzdNiza, a[i]);
    }

    cout << "NZD: " << nzdNiza << endl;
    return 0;

}