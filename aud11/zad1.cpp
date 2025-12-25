//
// Created by David Arsov on 18.12.25.
//

#include <iostream>

using namespace std;

// Да се напишат фунција за сортирање на низа со помош на методот за сортирање -
// Метод на меурче (Bubble sort) Да се напишат функции за внесување
// и печатење на елементите на една низа и да се напише главна програма во к
// оја се тестира методот

void pecatiNiza(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

void bubbleSort(int a[], int n) {
    // for (int i = 0; i < n; i++) {
    //     for (int j = 0; j < n - 1; j++) {
    //         if (a[j] > a[j + 1]) {
    //             swap(a[j], a[j + 1]);
    //         }
    //     }
    //     pecatiNiza(a, n);
    //     cout << endl;
    // }

    bool change = true;
    while (change) {
        change = false;
        for (int j = 0; j < n - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                change = true;
            }
        }
        pecatiNiza(a, n);
        cout << endl;
    }
}

int main() {

    int n;
    int a[100];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    bubbleSort(a, n);
    return 0;
}