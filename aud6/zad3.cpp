//
// Created by David Arsov on 6.11.25.
//

#include <iostream>

using namespace std;

//Да се напише програма која за даден природен број ја пресметува разликата помеѓу
//најблискиот поголем од него прост број и самиот тој број.

bool daliProst(int n) {
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {

    int n;
    cin >> n;

    int temp = n;

    while (1) {
        n++;
        if (daliProst(n)) {
            cout << "Razlikata e: " << n - temp;
            // return 0;
            break;
        }
    }
    return 0;
}