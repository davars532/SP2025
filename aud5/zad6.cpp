//
// Created by David Arsov on 30.10.25.
//

#include <iostream>

using namespace std;

// Да се напише програма што од непознат број на цели броеви што се
// внесуваат од тастатура ќе го определи бројот со максимална вредност.
// Програмата завршува ако се внесе невалидна репрезентација на број.

int main() {

    int x;
    int max;
    int prvBroj = 1;
    while (cin >> x) {
        if (prvBroj == 1) {
            max = x;
            prvBroj = 0;
        }

        if (x > max) {
            max = x;
        }
    }

    cout << max;
    return 0;
}