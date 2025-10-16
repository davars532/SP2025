//
// Created by David Arsov on 9.10.25.
//

#include <iostream>

using namespace std;


// Да се напише програма за пресметување на аритметичката средина на броевите 3, 5 и 12.


int main() {
    float a = 3, b = 5, c = 12;
    cin >> a >> b >> c;


    float arit = (a + b + c) / 3.0;

    cout << "Aritmetickata sredina e : " << arit;
    return 0;
}