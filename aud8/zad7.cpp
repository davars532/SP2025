//
// Created by David Arsov on 27.11.25.
//

#include<iostream>

using namespace std;

// Да се напише програма која што ќе ги избрише дупликатите
// од една низа.
// На крај, да се испечати на екран новодобиената низа.
// Елементите од низата се читаат од стандарден влез.

int main() {

    int n;
    int a[100];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int duplikati = 0;

    for (int i = 0; i < n; i++) {
        int momentalen = a[i];
        for (int j = i + 1; j < n; j++) {
            if (momentalen == a[j]) {
                duplikati++;
                for (int k = j; k < n - 1; k++) {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    cout << duplikati << endl;

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = " << a[i] << endl;
    }

    return 0;
}