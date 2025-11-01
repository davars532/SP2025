//
// Created by David Arsov on 30.10.25.
//

#include <iostream>

using namespace std;

// Да се напише програма што на екран ќе ги испечати сите четири-цифрени броеви кај
// кои збирот на трите најмалку значајни цифри е еднаков со најзначајната цифра.

// 4031 (4=0+3+1), 5131 (5=1+3+1)

int main() {

    for (int i = 1000; i <= 9999; i++) {
        int pC, vC, tC, cC;
        pC = i % 10;
        vC = i % 100 / 10;
        tC = i % 1000 / 100;
        cC = i / 1000;

        if ((pC + vC + tC) == cC) {
            cout << i << endl;
        }
    }
    return 0;
}