//
// Created by David Arsov on 27.11.25.
//

#include <iostream>

using namespace std;

// Да се напише програма која ќе го пресмета скаларниот производ
// на два вектори со по n координати. Бројот на координати n,
// како и координатите на векторите се внесуваат од стандарден влез.
// Резултатот да се испечати на екран.

int main() {

    int a[100];
    int b[100];

    int n;
    int proizovd = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        proizovd = proizovd + a[i] * b[i];
    }

    cout << "Sklararen proizvod na dvata vektori e: " << proizovd;
    return 0;
}