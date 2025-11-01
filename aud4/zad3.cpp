//
// Created by David Arsov on 30.10.25.
//


#include <iostream>

using namespace std;


// Да се напише програма што од n броеви (внесени од тастатура) ќе го определи
// бројот на броеви што се деливи со 3, при делењето со 3 имаат остаток 1, односно 2.

// Задачата да се реши со while, do…while и for


int main() {
    int n;
    cin >> n;
    int brDelivi = 0, brOstatok1 = 0, brOstatok2 = 0;

    // for

    for (int i = 0; i < n; i++) {
        int br;
        cin >> br;

        // dali e deliv so 3
        if (br % 3 == 0) {
            brDelivi++;
        }

        // dali ima ostatok 1
        if (br % 3 == 1) {
            brOstatok1++;
        }

        // dali ima ostatok 2
        if (br % 3 == 2) {
            brOstatok2++;
        }
    }

    cout << "Brojot na vneseni broevi delivi so 3 e: " << brDelivi << endl;
    cout << "Brojot na vneseni broevi so ostatok 1 e: " << brOstatok1 << endl;
    cout << "Brojot na vneseni broevi so ostatok 2 e: " << brOstatok2 << endl;

    // while

    brDelivi = brOstatok1 = brOstatok2 = 0;

    // while (n > 0) {
    //     int br;
    //     cin >> br;
    //
    //     //dali e deliv so 3
    //     if (br % 3 == 0) {
    //         brDelivi++;
    //     }
    //
    //     //dali ima ostatok 1
    //     if (br % 3 == 1) {
    //         brOstatok1++;
    //     }
    //
    //     // dali ima ostatok 2
    //     if (br % 3 == 2) {
    //         brOstatok2++;
    //     }
    //
    //     n--;
    // }
    //
    // cout << "Brojot na vneseni broevi delivi so 3 e: " << brDelivi << endl;
    // cout << "Brojot na vneseni broevi so ostatok 1 e: " << brOstatok1 << endl;
    // cout << "Brojot na vneseni broevi so ostatok 2 e: " << brOstatok2 << endl;


    // do-while

    brDelivi = brOstatok1 = brOstatok2 = 0;

    if (n == 0) {
        return 0;
    }

    do {
        int br;
        cin >> br;

        //dali e deliv so 3
        if (br % 3 == 0) {
            brDelivi++;
        }

        //dali ima ostatok 1
        if (br % 3 == 1) {
            brOstatok1++;
        }

        if (br % 3 == 2) {
            brOstatok2++;
        }

        n--;
    } while (n > 0);

    cout << "Brojot na vneseni broevi delivi so 3 e: " << brDelivi << endl;
    cout << "Brojot na vneseni broevi so ostatok 1 e: " << brOstatok1 << endl;
    cout << "Brojot na vneseni broevi so ostatok 2 e: " << brOstatok2 << endl;


    return 0;
}
