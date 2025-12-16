//
// Created by David Arsov on 27.11.25.
//

//Од стандарден влез се читаат едноцифрени броеви, се додека
//не се прочита нешто што не е број. Да се испечати на екран
//статистика колку пати се јавува секоја цифра меѓу прочитаните броеви.

#include <iostream>

using namespace std;

int main() {

    int n;
    int a[10];

    for (int i = 0; i < 10; i++) {
        a[i] = 0;
    }

    while (cin >> n) {
        a[n]++;
    }

    for (int i = 0; i < 10; i++) {
        cout << a[i] << " " << endl;
    }
    return 0;
}