//
// Created by David Arsov on 30.10.25.
//

#include <iostream>

using namespace std;

// Да се напише програма што на екран ќе ги испечати сите броеви од 1000 до N кај
// кои збирот на трите најмалку значајни цифри е еднаков со најзначајната цифра.



int main() {
    int n;
    cin >> n;

    for (int i = 1000; i <= n; i++) {
        int temp = i;

        int pC, vC, tC, cC;
        pC = i % 10;
        vC = i % 100 / 10;
        tC = i % 1000 / 100;

        // za dobivanje na najznacanjata cifra od broj so nepoznat broj cifri
        while (temp > 10) {
            temp /= 10;
        }

        cC = temp;

        if ((pC + vC + tC) == cC) {
            cout << i << endl;
        }
    }
    return 0;
}