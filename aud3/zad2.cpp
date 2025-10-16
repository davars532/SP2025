//
// Created by David Arsov on 16.10.25.
//

#include <iostream>

using namespace std;

// Од тастатура се внесуваат координати на една точка од рамнина. Да се напише програма со која ќе се испечати на кој квадрант припаѓа внесената точка.

int main() {

    float x, y;
    cout << "Vnesi koordinati x i y: " << endl;
    cin >> x >> y;

    if (x > 0 && y > 0) {
        cout << "Prv kvadrant";
    } else if (x < 0 && y > 0) {
        cout << "Vtor kvadrant";
    } else if (x < 0 && y < 0) {
        cout << "Tret kvadrant";
    } else if (x > 0 && y < 0) {
        cout << "Cetvrt kvadrant";
    } else if (x == 0 && y == 0) {
        cout << "Tockata e na koordinatniot pocetok";
    } else if (x == 0) {
        cout << "Tockata e na y oska";
    } else if (y == 0) {
        cout << "Tockata e na x oska";
    }


    // else if (x == 0 && y != 0) {
    //     cout << "Tockata e na y oska";
    // } else if (y == 0 && x != 0) {
    //     cout << "Tockata e na x oska";
    // } else {
    //     cout << "Tockata e vo koordinatniot pocetok;"
    // };

    if (x > 0) {
        if (y > 0) {
            cout << "Prv kvadrant";
        }

        if (y < 0) {
            cout << "Cetvrt kvadrant";
        }

        if (y == 0) {
            cout << "Tockata e na x oska";
        }
    }

    if (x < 0) {
        if (y > 0) {
            cout << "Vtor kvadrant";
        }

        if (y < 0) {
            cout << "Tret kvadrant";
        }

        if (y == 0) {
            cout << "Tockata e na x oska";
        }
    }

    if (x == 0 && y == 0) {
        cout << "Tockata e vo koordinatniot pocetok";
    } else if (x == 0) {
        cout << "Tockata e na y oska";
    }



    return 0;
}