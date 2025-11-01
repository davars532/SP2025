//
// Created by David Arsov on 30.10.25.
//


#include <iostream>

using namespace std;

// Да се напише програма што од непознат број на цели броеви што се внесуваат од тастатура ќе го
// определи бројот со максимална вредност. Притоа, броевите поголеми од 100
// не се земаат предвид т.е. се игнорираат.
// Програмата завршува ако се внесе невалидна репрезентација на број.

int main() {

    int max;
    int n;

    int prvBroj = 1;

    while (cin >> n) {
        // vazno e da bide prva ovaa proverka za da se otfrli prviot broj ako e 100
        if (n > 100) {
            continue;
        }

        if (prvBroj == 1) {
            max = n;
            prvBroj = 0;
        }

        if (n > max) {
            max = n;
        }
    }

    cout << max << endl;


    return 0;
}