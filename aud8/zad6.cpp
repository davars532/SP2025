//
// Created by David Arsov on 27.11.25.
//

#include <iostream>

using namespace std;

// Да се напише програма за ротирање на елементите на една
// низа за m местa во десно. На крај, да се испечати на екран
// ротираната низа. Елементите од низата и бројот на ротирања
// се читаат од стандарден влез.

void pecati(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {

    int a[100];
    int n;
    int m;
    cin >> n;
    cin >> m;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int j = 1; j <= m; j++) {
        int temp = a[n -1];

        for (int i = n - 1; i > 0; i--) {
            a[i] = a[i - 1];
        }

        a[0] = temp;
        pecati(a, n);
    }



    return 0;
}