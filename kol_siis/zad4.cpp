//
// Created by David Arsov on 10.11.25.
//


#include <iostream>

using namespace std;

// Read from SI two integers a and b. Write a program that will print all
// numbers from a to b (a < b), such as the number created as a product of
// the digits from the next to the first to the next to
// last digit (middle digits = the digits that will remain if we
// remove the first and the last digit from the original number) is
// divisible with the number created from the last and the first digit.
// Do not print the numbers where the product of the middle digits is 0.
// At the end print the count of such numbers.

// When printing out the numbers, next to each number that satisfies the condition,
// print the equation of that condition, for example: 55650 -> (150 == 50 * 3),
// where 150 = 5 * 6 * 5 and 50 is constructed from 5 (the first digit)
// and the 0 (the last digit of the number)

int main() {

    int a, b;
    int brojac = 0;

    cin >> a >> b;

    for (int i = a; i <= b; i++) {
        int posledna = i % 10;
        int proizvod = 1;

        int temp = i / 10;
        while (temp > 10) {
            int c = temp % 10;
            proizvod *= c;
            temp /= 10;
        }

        //prva vo temp

        int broj = temp * 10 + posledna;

        if (proizvod == 0) {
            continue;
        }
        if (proizvod != 0 && proizvod % broj == 0) {
        // if (proizvod % broj == 0) {
            // 55560 -> (150 == 50 * 3)
            brojac++;
            cout << i << " -> (" << proizvod << " == "
            << broj << " * " << proizvod / broj << ")" << endl;
        }

    }

    cout << brojac << endl;
}