//
// Created by David Arsov on 27.11.25.
//

#include<iostream>

// Да се напише програма која за две низи кои се
// внесуваат од тастатура ќе провери дали се еднакви
// или не. На екран да се испачати резултатот од
// споредбата.
// Максимална големина на низите е 100.

using namespace std;


int main() {
    int a[100], b[100];
    int n, m;
    // n e dolzina na a
    // m e dolzina na b
    cin >> n >> m;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    if (m != n) {
        cout << "Nizite se razlicni";
        return 0;
    }
    // m = 4 n = 4
    // a
    // 1 2 3 4
    // 0 1 2 3

    // b
    // 2 3 4 5
    // 0 1 2 3

    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            cout << "Nizite se razlicni";
            return 0;
        }
    }

    int flag = 1;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            flag = 0;
            break;
        }
    }

    if (flag == 0) {
        cout << "Nizite se razlicni";
    } else {
        cout << "Nizite se isti";
    }
    return 0;
}