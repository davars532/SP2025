//
// Created by David Arsov on 18.12.25.
//

#include <iostream>

using namespace std;

// Да се напише програма која за дадена низа од цели броеви
// (која што се внесува од тастатура) ќе го отпечати најголемиот елемент.
// Програмата треба да содржи рекурзивна функција за наоѓање на
// најголем елемент во дадена низа.

int maxNiza(int a[], int n) {
    if (n == 0) {
        return a[n];
    }
    int maxPrethoden = maxNiza(a, n - 1);
    if (maxPrethoden > a[n]) {
        return maxPrethoden;
    }
    return a[n];
}

int main() {
    int n;
    cin >> n;
    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << maxNiza(a, n - 1) << endl;
    return 0;
}