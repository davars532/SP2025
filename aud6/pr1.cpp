//
// Created by David Arsov on 6.11.25.
//


#include <iostream>
#include <cmath>

//Да се напише програма во која со посебна функција се
//пресметува куб n3 за вчитан природен број n.

// kub(n)

using namespace std;

float kub(float n) {
    float rezultat = n * n * n;
    return rezultat;

    //return n * n * n;
}

int main() {

    float n;
    float rezultat;
    cin >> n;

    cout << kub(n) << endl;
    cout << pow(n, 3) << endl;
    cout << rezultat;
    return 0;
}