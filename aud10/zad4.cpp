//
// Created by David Arsov on 11.12.25.
//


#include <iostream>
// Да се напише програма што ќе ја испишува вредноста
// на n-тиот член на низата дефинирана со:
//     x[1] = 1
    // x[2] = 2
    // ...
    // x[n] = (n - 1) * x[n - 1] / n + x[n - 2] / n

using namespace std;

float fun(float n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }
    return (n - 1) * fun(n - 1) / n + fun(n - 2) / n;
}

int main() {

    int n;
    cin >> n;
    cout << fun(n) << endl;
    return 0;
}