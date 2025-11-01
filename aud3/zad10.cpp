//
// Created by David Arsov on 30.10.25.
//


#include <iostream>

using namespace std;

// Од тастатура се внесуваат 3 броеви
// Првиот да се замени со вториот, а потоа третиот да се замени со првиот

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    cout << "a = " << a << " b = " << b << " c = " << c << endl;

    //Првиот да се замени со вториот
    int temp = a;
    a = b;
    b = temp;

    cout << "a = " << a << " b = " << b << " c = " << c << endl;

    //третиот да се замени со првиот
    int temp2 = a;
    a = c;
    c = temp2;

    cout << "a = " << a << " b = " << b << " c = " << c << endl;

}