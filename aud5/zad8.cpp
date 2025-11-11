//
// Created by David Arsov on 6.11.25.
//

// Да се напише програма што од непознат број на цели броеви што се внесуваат од
// тастатура ќе ги определи двата броја со најголеми вредности.
// Програмата завршува ако се внесе невалидна репрезентација на број.

// Ако се внесат броевите 2 4 7 4 2 1 8 6 9 7 10 3 програмата ќе отпечати 10 и 9.

#include <iostream>

using namespace std;

int test (int a1, int b1) {

}

int main() {
    int max1, max2;
    int prvBroj = 1;
    int vtorBroj = 0;
    int n;

    while (cin >> n) {
        if (prvBroj) {
            max1 = n;
            prvBroj = 0;
            vtorBroj = 1;
            continue;
        }

        if (vtorBroj) {
            max2 = n;

            if (max2 > max1) {
                int temp = max1;
                max1 = max2;
                max2 = temp;
            }
            vtorBroj = 0;
        }

        if (n > max1) {
            max2 = max1;
            max1 = n;
        } else if (n > max2) {
            max2 = n;
        }
    }
    cout << max1 << " " << max2;
    return 0;
}


