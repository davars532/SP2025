//
// Created by David Arsov on 18.12.25.
//

#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Пронаоѓање на минимална и максимална вредност во низа со покажувачи
void nizaMaxMin(int a[], int n, int *max, int *min) {
    *max = a[0];
    *min = a[0];

    for (int i = 0; i < n; i++) {
        if (a[i] > *max) {
            *max = a[i];
        }

        if (a[i] < *min) {
            *min = a[i];
        }
    }
}

int main() {

    int x = 5, y = 10;
    cout << x << " " << y << endl;
    swap(&x, &y);
    cout << x << " " << y << endl;

    int n;
    cin >> n;
    int a[100];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max, min;
    nizaMaxMin(a, n, &max, &min);
    cout << max << " " << min << endl;
    return 0;
}