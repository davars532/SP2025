//
// Created by David Arsov on 9.10.25.
//

#include <iostream>

using namespace std;

// Да се напише програма каде од тастатура ќе се внесе трицифрен цел број.
// Програмата ќе ја испечати најзначајната и најмалку значајната цифра од бројот

// Пример: Ако се внесе бројот 795, програмата ќе испечати: Najznacajna cifra e 7, a najmalku znacajna e 5.
// ПОМОШ: Искористете целобројно делење и остаток од делење.

int main() {
    int x;
    cin >> x;
    //ZA 3 CIFREN
    int najmalkuZnacajna = x % 10;
    int najznacajna = x / 100;

    cout << najmalkuZnacajna << endl;
    cout << najznacajna << endl;

    //ZA 5 CIFREN
    najmalkuZnacajna = x % 10;
    najznacajna = x / 10000;
    int a = 0, b = 0, c = 0;
    int y = (a = 1, b = 2, c = 3);
    cout << y << endl;
    return 0;
}