//
// Created by David Arsov on 16.10.25.
//

#include <iostream>

using namespace std;

/*Од тастатура се внесуваат должини на три отсечки во произволен редослед. Да се напише програма што ќе провери дали од отсечките
 *може да се конструира триаголник, при што ако може,
 *да се провери дали истиот е правоаголен и да се пресмета неговата плоштина. Во спротивно, треба да се испечатат соодветни пораки.
 */

int main() {

    float a, b, c;

    cout << "Vnesi dolzina na tri otsecki za triagolnik: ";
    cin >> a >> b >> c;

    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        cout << "Moze da se konstruira triagolnik" << endl;

        if (a >= b && a >= c) {
            float temp = c;
            c = a;
            a = temp;
        } else if (b >= a && b >= c) {
            float temp = c;
            c = b;
            b = temp;
        }

        float a2 = a * a;
        float b2 = b * b;
        float c2 = c * c;

        if (c2 == a2 + b2) {
            cout << "Triagolnikot e pravoagolen" << endl;

            float p = a * b / 2;
            cout << "Plostinata na triagolnikot e: " << p;
        }
    } else {
        cout << "Ne moze da se konstruira triagolnik so navedenite otsecki";
    }


    return 0;
}