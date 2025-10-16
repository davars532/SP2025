//
// Created by David Arsov on 16.10.25.
//

#include <iostream>
using namespace std;
int main() {
    int m = 10, n = 5;
    if (m > n) {
        ++m;
        ++n;
    }
    cout << "m = " << m << ", n = " << n;
    return 0;
}