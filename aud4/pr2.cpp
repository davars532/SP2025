//
// Created by David Arsov on 30.10.25.
//

#include <iostream>

// Да се пресмета сума на броевите од 1 до N,
// N се внесува од тастатура

using namespace std;

int main() {
    int n;
    cin >> n;

    // Suma sekogas zapocnuva od 0
    int suma= 0;
    for (int i = 1; i <= n; i++) {
        suma += i;
    }
    cout << "Sumata od 1 do " << n << " e " << suma << endl;

    int temp = n;
    int suma2 = 0;
    while (n > 0) {
        suma2 += n;
        n--;
    }
    cout << "Sumata od 1 do " << temp << " e " << suma2;

}