//
// Created by David Arsov on 9.10.25.
//

#include <iostream>

using namespace std;

// Да се напише програма за пресметување и печатење на плоштината и периметарот на круг. Р
// адиусот на кругот се чита од стандарден влез (тастатура) како децимален број.

int main() {
    float radius;
    cin >> radius;

    float pi = 3.14159;

    float perimeter = 2 * pi * radius;
    float area = radius * radius * pi;

    cout << "Perimetarot e " << perimeter << endl;
    cout << "Plostinata e " << area << endl;

    return 0;
}