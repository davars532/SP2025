//
// Created by David Arsov on 9.10.25.
//

#include <iostream>

using namespace std;

// Да се напише програма која за дадени страни на еден разностран триаголник ќе
// ги отпечати на екран периметарот и квадратот од плоштината (нека се работи со a = 5, b = 7.5, c = 10.2).

int main() {
    int a = 5;
    int b = 7;
    int c = 10;

    int perimeter = a + b + c;

    cout << "Perimetarot na triagolnikot e: " << perimeter << endl;

    float S = perimeter / 2;
    float pSquared = S * (S - a) * (S - b) * (S - c);

    cout << "Kvardatot na plostinata e: " << pSquared;
    // float S = (a + b + c) / 2;
}