//
// Created by David Arsov on 6.11.25.
//

#include <iostream>
#include <cmath>

// Да се напише програма што од N цели броеви внесени од тастатура ќе ја определи разликата од сумите на
// броевите на парни и непарни позиции (според редоследот на внесување). Ако оваа разлика е помала од 10 на екран
// се печати “Dvete sumi se slicni”, а во спротивно “Dvete sumi mnogu se razlikuvaat”.



using namespace std;

int main() {
    int sumaParni = 0;
    int sumaNeparni = 0;

    int n;

    cin >> n;

    for (int i = 1; i <= n; i++) {
        int br;
        cin >> br;

        if (i % 2 == 0) {
            sumaParni += br;
        } else {
            sumaNeparni += br;
        }
    }

    int razlika = sumaParni - sumaNeparni;
    razlika = abs(razlika);

    // се печати “Dvete sumi se slicni”, а во спротивно “Dvete sumi mnogu se razlikuvaat”.

    if (razlika < 10) {
        cout << "Dvete sumi se slicni";
    } else {
        cout << "Dvete sumi mnogu se razlikuvaat";
    }

    return 0;
}