//
// Created by David Arsov on 11.12.25.
//


#include <iostream>

using namespace std;

// Да се напише програма која за даден природен број
// ја пресметува разликата помеѓу најблискиот поголем од
// него прост број и самиот тој број.

// Програмата треба да користи рекурзивна функција за
// наоѓање на соодветниот прост број, која пак треба да
// користи рекурзивна функција за проверка дали даден
// број е прост број.

int isPrime(int n, int i) {
    if (n < 4) {
        return 1;
    }
    if (n % 2 == 0) {
        return 0;
    }
    if (i >= n) {
        return 1;
    }
    if (n % i == 0) {
        return 0;
    }
    return isPrime(n, i + 1);
}


int greaterPrime(int n) {
    if (isPrime(n, 2) == 1) {
        return n;
    }
    return greaterPrime(n + 1);
}


int main() {
    int n;
    cin >> n;
    int pogolemProst = greaterPrime(n + 1);
    cout << pogolemProst << endl;
    cout << pogolemProst - n;
    return 0;
}