//
// Created by David Arsov on 16.10.25.
//

#include <iostream>
#include <cmath>

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

        if ((a == b) && (b == c)) {
            cout << "Triagolnikot e ramnostran";
        } else if ((a == b) || (b == c) || (c == a)) {
            cout << "Triagolnikot e ramnokrak";
        } else {
            cout << "Triagolnikot e raznostran";
        }

        float s = (a + b + c) / 2;
        float p2 = s * (s - a) * (s - b) * (s - c);
        float p = sqrt(p2);
        cout << "Plostinata na triagolnikot e " << p;
    } else {
        cout << "Ne moze da se konstruira triagolnik so navedenite otsecki";
    }


    return 0;
}
