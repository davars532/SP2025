//
// Created by David Arsov on 27.11.25.
//

#include <iostream>

using namespace std;

// Да се напише програма која за низа чии елементи се внесуваат од тастатура,
// ќе го пресмета збирот на парните елементи, збирот на непарните елементи,
// како и односот помеѓу
// бројот на парни и непарни елементи. Резултатот да се испечати на екран.

int main() {
    int a[100];
    int n;

    int sumaParni = 0;
    int sumaNeparni = 0;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        // if (a[i] % 2 == 0) {
        //     sumaParni += a[i];
        // } else {
        //     sumaNeparni += a[i];
        // }
        if (i % 2 == 0) {
            sumaParni += a[i];
        } else {
            sumaNeparni += a[i];
        }
    }

    cout << "Zbir na parni broevi: " << sumaParni << endl;
    cout << "Zbir na neparni broevi: " << sumaNeparni << endl;
    cout << "Zbir parni / Zbir neparni: " << (float) sumaParni / sumaNeparni << endl;

    return 0;
}