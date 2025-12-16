//
// Created by David Arsov on 11.12.25.
//

#include <iostream>

using namespace std;

// Да се напише програма која за дадена низа од
// цели броеви (која што се внесува од тастатура)
// ќе го отпечати збирот на елементи од низата. Програмата треба да содржи рекурзивна
// функција за наоѓање на збирот на елементите во дадена низа.


int zbirNiza(int a[], int n) {
    if (n == 0) return a[0];
    return a[n] + zbirNiza(a, n - 1);
}

int main() {
    int n;
    int a[100];

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << zbirNiza(a, n - 1) << endl;
    return 0;
}

