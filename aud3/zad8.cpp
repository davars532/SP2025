//
// Created by David Arsov on 30.10.25.
//

// Да се напише програма со која ќе се отпечати максимумот од два
// броја чии вредности се читаат од тастатура.


#include <iostream>

using namespace std;

int main() {
    float a, b;
    cin >> a >> b;

    int max;

    if (a == b) {
        cout << "Broevite se ednakvi";
        return 0;
    }

    if (a >= b)
        max = a;

    if (b > a)
        max = b;

    cout << "Maksimumumot e: " << max;

    max = (a >= b) ? a : b;

    cout << "Maksimumumot e: " << max;

    return 0;
}