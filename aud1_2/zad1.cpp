//
// Created by David Arsov on 9.10.25.
//

#include <iostream>

using namespace std;


// Да се напише програма која ќе ја пресметува вредноста на математичкиот израз: x = 3/2 + (5 – 46*5/12)
int main() {
    float x = 3.0 / 2 + (5 - 46 * 5.0 / 12);
    cout << x;

    cout << 1 / 2 << " ";
    cout << 1.0 / 2;

    float y = 1;
    int z = 2;

    cout << "y / z " << y / z;

    int y1 = 1;
    int z1 = 2;

    cout << "y / z " << (float) y1 / z1;

    float y2 = 1;
    float z2 = 2;

    cout << "y / z " << y2 / z2;
    return 0;
}