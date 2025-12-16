//
// Created by David Arsov on 27.11.25.
//

#include<iostream>

using namespace std;

// Да се напише програма за ротирање на елементите на една низа
// за едно место во десно. На крај, да се испечати на екран
// ротираната низа. Елементите од низата се читаат од стандарден влез.



int main() {

    int n;
    int a[100];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    // Pomestuvanje vo desno
    int temp = a[n - 1];
    for (int i = n - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }

    a[0] = temp;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << endl << endl;


    return 0;
}