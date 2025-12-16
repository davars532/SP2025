//
// Created by David Arsov on 11.12.25.
//

#include <iostream>

using namespace std;

// Да се напише рекурзивна функција која
// ќе го пресметува збирот на цифрите
// на еден број.

int sumaCifri(int n) {
    if (n == 0) return 0;
    // if (n < 10) return n;
    return n % 10 + sumaCifri(n /10);
}

int main() {
    int n;
    cin >> n;

    cout << "Suma na cifri: " << sumaCifri(n) << endl;

    return 0;
}