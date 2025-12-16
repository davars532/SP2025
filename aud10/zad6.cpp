//
// Created by David Arsov on 11.12.25.
//

#include <iostream>

using namespace std;

// За даден број n, да се напише рекурзивна функција која
// ќе ги изброи појавувањата на цифрата 8. Притоа, доколку
// до некоја цифра 8 има уште една
// цифра 8 веднаш лево од неа, нејзиното појавување се брои двојно.

int count8(int n) {
    if (n == 0) return 0;
    if (n % 10 == 8 && n % 100 / 10 == 8) return 2 + count8(n / 10);
    if (n % 10 == 8) return 1 + count8(n / 10);
    return 0 + count8(n / 10);
}

int main() {

    int n;
    cin >> n;
    cout << count8(n) << endl;
    return 0;
}