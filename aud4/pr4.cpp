//
// Created by David Arsov on 1.11.25.
//

#include <iostream>

using namespace std;

// Да се пресмета сума на парни и непарни броеви до N

int main() {
    int n;
    cin >> n;

    int sumaParni = 0;
    int sumaNeparni = 0;
    for (int i = 0; i <= n; i++) {
        if (i % 2 != 0) {
            sumaNeparni += i;
        } else if (i % 2 == 0) {
            sumaParni += i;
        }
    }

    cout << "Sumata na neparnite broevi od 1 do " << n << " e: " << sumaNeparni << endl;
    cout << "Sumata na parnite broevi od 1 do " << n << " e: " << sumaParni << endl;

    sumaParni = 0;
    sumaNeparni = 0;

    int temp = n;
    while (n > 0) {
        if (n % 2 != 0) {
            sumaNeparni += n;
        } else if (n % 2 == 0) {
            sumaParni += n;
        }
        n--;
    }

    cout << "Sumata na neparnite broevi od 1 do " << temp << " e: " << sumaNeparni << endl;
    cout << "Sumata na parnite broevi od 1 do " << temp << " e: " << sumaParni << endl;

}