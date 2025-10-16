//
// Created by David Arsov on 9.10.25.
//

#include <iostream>

using namespace std;


//Да се напише програма која ќе ги отпечати на екран остатоците при делењето на бројот 19 со 2, 3, 5 и 8.


int main() {

    cout << "Ostatok od delenje na 19 so 2 e " << 19 % 2 << endl;
    cout << "Ostatokot od delenje na 19 so 3 e " << 19 % 3 << endl;

    int x;

    cin >> x;

    cout << "Ostatok od delenje na " << x << " so 2 e " << x % 2 << endl;
    cout << "Ostatok od delenje na " << x << " so 3 e " << x % 3 << endl;
    cout << "Ostatok od delenje na " << x << " so 4 e " << x % 4 << endl;
    cout << "Ostatok od delenje na " << x << " so 5 e " << x % 5 << endl;
    cout << "Ostatok od delenje na " << x << " so 6 e " << x % 6 << endl;
    cout << "Ostatok od delenje na " << x << " so 7 e " << x % 7 << endl;
    cout << "Ostatok od delenje na " << x << " so 8 e " << x % 8 << endl;
    cout << "Ostatok od delenje na " << x << " so 9 e " << x % 9 << endl;
    cout << "Ostatok od delenje na " << x << " so 10 e " << x % 10 << endl;

    cout << "Prva cifra" << x / 1000 << endl;
    cout << "Vtora cifra" << x % 1000 / 100 << endl;
    cout << "Treta cifra" << x % 100 / 10 << endl;
    cout << "Cifra cifra" << x % 10 << endl;

    return 0;

}