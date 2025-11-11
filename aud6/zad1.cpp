//
// Created by David Arsov on 6.11.25.
//


#include <iostream>

using namespace std;

//Да се напишат соодветни функции за пресметување на дијаметар, периметар и плоштина на круг чиј што
//радиус се предава како аргумент.
//Потоа да се напише и програма во која за внесен (од тастатура)
//радиус ќе се повикаат овие функции за да се пресметаат дијаметарот, периметарот и плоштината на соодветниот круг.

float dijametar(float r) {
    return r * 2;
}

float perimetar(float r) {
    float pi = 3.141592653589793;
    return 2 * r * pi;
}

float plostina(float r) {
    float pi = 3.141592653589793;
    return r * r * pi;
}

int main() {
    float r;

    cin >> r;

    cout << "Dijametar: " << dijametar(r) << endl;
    cout << "Perimetar: " << perimetar(r) << endl;
    cout << "Plostina: " << plostina(r) << endl;
}