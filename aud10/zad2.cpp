//
// Created by David Arsov on 11.12.25.
//

#include <iostream>

using namespace std;

// Да се напише рекурзивна функција count_down(int n)
// која за даден цел број n
// ќе овозможи печатење на броевите од n до 0.
void countDown(int n) {
    if (n == 0) {
        cout << 0 << endl;
        return;
    }

    // if (n < 0) {
    //     return;
    // }
    // cout << n << endl;
    countDown(n - 1);
    cout << n << endl;

}

int main() {
    int n;
    cin >> n;
    countDown(n);
    return 0;
}