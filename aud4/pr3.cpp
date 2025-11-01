//
// Created by David Arsov on 30.10.25.
//

#include <iostream>

using namespace std;

// Да се пресмета производ на броевите од 1 до N
// N се внесува од тастатура

int main() {

    int n;

    cin >> n;

    // Proizvod sekogas zapocnuva od 1
    int proizvod = 1;
    for (int i = 1; i <= n; i++) {
        proizvod *= i;
    }

    cout << "Proizvodot od 1 do n e " << proizvod << endl;

    proizvod = 1;
    while (n > 0) {
        proizvod *= n;
        n--;
    }

    cout << "Proizvodot od 1 do n e " << proizvod << endl;

    return 0;
}