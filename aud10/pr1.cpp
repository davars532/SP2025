//
// Created by David Arsov on 11.12.25.
//

#include <iostream>

using namespace std;

int factoriel(int n) {
    if (n == 1) return 1;
    return n * factoriel(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << "Faktoriel: " << factoriel(n) << endl;
    return 0;
}