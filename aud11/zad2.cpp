//
// Created by David Arsov on 18.12.25.
//


#include <iostream>
#include <cstdlib> // For rand()
#include <ctime> // For time()

using namespace std;

// Да се напишат следните функции за пребарување во низа:
// • Линеарно пребарување
// • Бинарно пребарување
// Потоа да се напише главна програма во која ќе се пополнува
// низа со броевите од 1 до 1 000 000, а потоа се генерира
// случаен број во овој опсег чија што позиција треба
// да се пронајде со повикување на двете функции за пребарување.

int linearSearch (int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int binarySearchIterative(int arr[], int n, int x) {
    int l = 0;
    int r = n - 1;

    while (l <= r) {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x) {
            return mid;
        }

        if (arr[mid] < x) {
            l = mid + 1;
        }

        if (arr[mid] > x) {
            r = mid - 1;
        }
    }

    return -1;
}

int binarySearchRecursive(int arr[], int x, int l, int r) {
    if (l > r) {
        return -1;
    }

    int mid = l + (r - l) / 2;

    if (arr[mid] == x) {
        return mid;
    }

    if (arr[mid] < x) {
        return binarySearchRecursive(arr, x, mid + 1, r);
    }

    if (arr[mid] > x) {
        return binarySearchRecursive(arr, x, l, mid - 1);
    }
}

int main() {
    int n;
    // cin >> n;

    int a[1000000];

    for (int i = 0; i < 1000000; i++) {
        a[i] = i + 1;
    }

    int b[] = {1, 2, 3, 4, 5};

    int x;
    // cin >> x;

    srand(time(NULL));
    x = 1 + rand() % 1000000;

    cout << linearSearch(a, 1000000, x) << endl;
    cout << binarySearchIterative(a, 1000000, x) << endl;
    cout << binarySearchRecursive(a, x, 0, 1000000 - 1) << endl;

    // for (int i = 1; i <= 5; i++) {
    //     cout << linearSearch(a, 5, i) << endl;
    //     cout << binarySearchIterative(a, 5, i) << endl;
    //     cout << binarySearchRecursive(a, 5, i, 0, 4) << endl;
    // }

    return 0;
}