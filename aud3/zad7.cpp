//
// Created by David Arsov on 30.10.25.
//

#include <iostream>

using namespace std;

//Да се напише програма за пресметување на возраста на едно куче во човечки години.
//Кучешката возраст се чита од стандарден влез.

// Доколку се внесе негативен број за возраста, да се испечати следната порака:
// “Vozrasta mora da bide pozitiven broj”.

// Забелешка: За првите две години, една кучешка година е еднаква на 10,5 човечки години.
// После тоа, секоја кучешка година е еднаква на 4 човечки години.



int main() {

    int godini;
    cin >> godini;

    if (godini < 0) {
        cout << "Vozrasta mora da bide pozitiven broj";

    } else if (godini <= 2) {
        cout << godini * 10.5;
    } else {
        cout << 2 * 10.5 + (godini - 2) * 4;
    }



    return 0;
}