//
// Created by David Arsov on 30.10.25.
//

// Да се напише програма што ќе ги испечати сите броеви од зададен
// опсег кои се читаат исто и одлево надесно и оддесно налево.

#include <iostream>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;

    for (int i = n; i <= m; i++) {
        int obraten = 0;

        // za da ne se izgubi vrednosta na i
        int temp = i;

        // dobivanje na obraten broj
        while (temp > 0) {
            int poslednaCifra = temp % 10;
            obraten = obraten * 10 + poslednaCifra;
            temp /= 10;
        }

        if (obraten == i) {
            cout << i << endl;
        }
    }

    return 0;
}